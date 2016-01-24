// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qpictureformatplugin.h
// dst-file: /src/gui/qpictureformatplugin.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpictureformatplugin.h>


// <= header block end

// main block begin =>
void __keep_qpictureformatplugin_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPictureFormatPlugin_Class_Size()
{
  return sizeof(QPictureFormatPlugin);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qpictureformatplugin.h', line 59, column 18>
//   // proto:  bool QPictureFormatPlugin::loadPicture(const QString & format, const QString & filename, QPicture * pic);
// _ZN20QPictureFormatPlugin11loadPictureERK7QStringS2_P8QPicture loadPicture(const class QString &, const class QString &, class QPicture *)
extern "C"
bool
C_ZN20QPictureFormatPlugin11loadPictureERK7QStringS2_P8QPicture(void *qthis,
const QString* arg1,
const QString* arg2,
QPicture * arg3) {
  auto ret =
  ((QPictureFormatPlugin*)qthis)->loadPicture(*((const QString*)arg1),
*((const QString*)arg2),
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpictureformatplugin.h', line 60, column 18>
//   // proto:  bool QPictureFormatPlugin::savePicture(const QString & format, const QString & filename, const QPicture & pic);
// _ZN20QPictureFormatPlugin11savePictureERK7QStringS2_RK8QPicture savePicture(const class QString &, const class QString &, const class QPicture &)
extern "C"
bool
C_ZN20QPictureFormatPlugin11savePictureERK7QStringS2_RK8QPicture(void *qthis,
const QString* arg1,
const QString* arg2,
const QPicture* arg3) {
  auto ret =
  ((QPictureFormatPlugin*)qthis)->savePicture(*((const QString*)arg1),
*((const QString*)arg2),
*((const QPicture*)arg3));
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QPictureFormatPlugin::~QPictureFormatPlugin();
extern "C"
void C_ZN20QPictureFormatPluginD2Ev(void *qthis) {
  delete (QPictureFormatPlugin*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpictureformatplugin.h', line 56, column 14>
//   // proto:  void QPictureFormatPlugin::QPictureFormatPlugin(QObject * parent);
extern "C"
QPictureFormatPlugin*
C_ZN20QPictureFormatPluginC2EP7QObject(QObject * arg1) {
  // auto ret = new QPictureFormatPlugin(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpictureformatplugin.h', line 61, column 18>
//   // proto:  bool QPictureFormatPlugin::installIOHandler(const QString & format);
// _ZN20QPictureFormatPlugin16installIOHandlerERK7QString installIOHandler(const class QString &)
extern "C"
bool
C_ZN20QPictureFormatPlugin16installIOHandlerERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QPictureFormatPlugin*)qthis)->installIOHandler(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpictureformatplugin.h', line 54, column 5>
//   // proto:  const QMetaObject * QPictureFormatPlugin::metaObject();
// _ZNK20QPictureFormatPlugin10metaObjectEv metaObject()
extern "C"
void*
C_ZNK20QPictureFormatPlugin10metaObjectEv(void *qthis) {
  auto ret =
  ((QPictureFormatPlugin*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QPictureFormatPlugin_SlotProxy here
class QPictureFormatPlugin_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPictureFormatPlugin_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qpictureformatplugin.moc"

extern "C" {
  QPictureFormatPlugin_SlotProxy* QPictureFormatPlugin_SlotProxy_new()
  {
    return new QPictureFormatPlugin_SlotProxy();
  }
};

// <= body block end

