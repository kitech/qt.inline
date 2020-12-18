// static 编译qt时的初始化修正
#include <QCoreApplication>
#include <QDebug>

#include <QtPlugin>

#if defined(QT_STATIC)

#if defined(Q_OS_LINUX) || defined(Q_OS_UNIX) || defined(Q_OS_DARWIN)
auto a = qputenv("QT_QPA_FONTDIR", "/usr/share/fonts");
#endif
#if defined(Q_OS_LINUX)
Q_IMPORT_PLUGIN(QXcbIntegrationPlugin)
#endif
#if defined(Q_OS_WIN)
Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)
#endif
#if defined(Q_OS_DARWIN)
Q_IMPORT_PLUGIN(QCocoaIntegrationPlugin)
#endif

Q_IMPORT_PLUGIN(QGifPlugin)
Q_IMPORT_PLUGIN(QJpegPlugin)

#endif // defined(QT_STATIC)

/*
  一些解析错误的符号表
 */


// QMetaObject::Connection::~Connection()
extern "C" Q_DECL_EXPORT
void C_ZN11QMetaObject10ConnectionD2Ev(void* qthis) {
    delete (QMetaObject::Connection*)(qthis); qthis = 0;
}

#include <qscreen.h>
#include <qpixmap.h>
extern "C" Q_DECL_EXPORT
void _ZN7QScreen10grabWindowEiiiii(void* qthis, int a0, int a1, int a2, int a3, int a4)
{
    QScreen *that = (QScreen*)qthis;
    that->grabWindow((WId)a0, a1, a2, a3, a4);
}

/*
#include <qopenglversionfunctions.h>
extern "C"
void* _ZN24QAbstractOpenGLFunctions6d_funcEv(void* qthis)
{
    QAbstractOpenGLFunctions* that = (QAbstractOpenGLFunctions*)qthis;
    return that->d_func();
}
*/

#if defined(QT_SHARED)
extern "C" Q_DECL_EXPORT
void _ZN18QMessageLogContext4copyERKS_(void* qthis, const QMessageLogContext &logContext)
{
    QMessageLogContext* that = (QMessageLogContext*)qthis;
    //that->copy(logContext);
}
#endif

/*
  extern  bool qRegisterResourceData(int, unsigned char const*, unsigned char const*, unsigned char const*);
  extern "C"
  bool C_Z21qRegisterResourceDataiPKhS0_S0_(int a0, unsigned char const* a1, unsigned char const* a2, unsigned char const* a3) {
  return qRegisterResourceData(a0, a1, a2, a3);
  }

  extern bool qUnregisterResourceData(int, unsigned char const*, unsigned char const*, unsigned char const*);
  extern "C"
  bool C_Z23qUnregisterResourceDataiPKhS0_S0_(int a0, unsigned char const* a1, unsigned char const* a2, unsigned char const* a3) {
  return qUnregisterResourceData(a0, a1, a2, a3);
  }
*/
