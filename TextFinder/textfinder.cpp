#include "textfinder.h"
#include "ui_textfinder.h"
#include <QFile>
#include <QTextStream>

TextFinder::TextFinder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextFinder)
{
    ui->setupUi(this);
    wrapSearch = false;
    loadTextFile();
}

TextFinder::~TextFinder()
{
    delete ui;
}

void TextFinder::on_findButton_clicked()
{
    QString searchString = ui->searchBox->text();

    // Searches starting from the cursor's current position.
    bool found = ui->textEdit->find(searchString, QTextDocument::FindWholeWords);

    if (!found && wrapSearch)
    {
        resetCursor();
        ui->textEdit->find(searchString, QTextDocument::FindWholeWords);
    }
}

void TextFinder::loadTextFile()
{
    QFile inputFile(":/input-file.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream inStream(&inputFile);
    QString line = inStream.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    resetCursor();
}

void TextFinder::resetCursor()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
    ui->textEdit->setTextCursor(cursor);
}

void TextFinder::on_wrapRadioButton_toggled(bool checked)
{
    wrapSearch = checked;
}
