/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.8.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // C:/Users/kmj_u/Documents/GitHub/Qt-Tutorials/TextFinder/input-file.txt
  0x0,0x0,0x0,0x22,
  0x54,
  0x68,0x69,0x73,0x20,0x69,0x73,0x20,0x61,0x6e,0x20,0x65,0x78,0x61,0x6d,0x70,0x6c,
  0x65,0x20,0x6f,0x66,0x20,0x73,0x6f,0x6d,0x65,0x20,0x74,0x65,0x78,0x74,0x2e,0xd,
  0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // input-file.txt
  0x0,0xe,
  0x6,0xe0,0xa0,0x74,
  0x0,0x69,
  0x0,0x6e,0x0,0x70,0x0,0x75,0x0,0x74,0x0,0x2d,0x0,0x66,0x0,0x69,0x0,0x6c,0x0,0x65,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/input-file.txt
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x59,0x75,0x52,0xdd,0xc2,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_textfinder_resource)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_textfinder_resource)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x02, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_textfinder_resource)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_textfinder_resource)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x02, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_textfinder_resource)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_textfinder_resource)(); }
   } dummy;
}
