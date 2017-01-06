#include "textfinder.h"
#include "ui_textfinder.h"
#include <QFile>
#include <QTextStream>

TextFinder::TextFinder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextFinder)
{
    ui->setupUi(this);
    loadTextFile();
}

TextFinder::~TextFinder()
{
    delete ui;
}

void TextFinder::on_findButton_clicked()
{
    QString searchString = ui->searchBox->text();
    bool found = ui->textEdit->find(searchString, QTextDocument::FindWholeWords);
    int x = 5;
}

void TextFinder::loadTextFile()
{
    QFile inputFile(":/input-file.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream inStream(&inputFile);
    QString line = inStream.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}
