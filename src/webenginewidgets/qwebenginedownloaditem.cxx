//  header block begin
// since 0x050500
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h
#ifndef protected
#define protected public
#endif
#include <qwebenginedownloaditem.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineDownloadItem is pure virtual: false
// QWebEngineDownloadItem has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWebEngineDownloadItem : public QWebEngineDownloadItem {
public:
  virtual ~MyQWebEngineDownloadItem() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QWebEngineDownloadItem10metaObjectEv(void *this_) {
  return (void*)((QWebEngineDownloadItem*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QWebEngineDownloadItem11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebEngineDownloadItem*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN22QWebEngineDownloadItem11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebEngineDownloadItem*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QWebEngineDownloadItem2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineDownloadItem::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QWebEngineDownloadItem6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineDownloadItem::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:56
// [-2] void ~QWebEngineDownloadItem()
extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineDownloadItemD2Ev(void *this_) {
  delete (QWebEngineDownloadItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:114
// [4] quint32 id()
extern "C" Q_DECL_EXPORT
quint32 C_ZNK22QWebEngineDownloadItem2idEv(void *this_) {
  return (quint32)((QWebEngineDownloadItem*)this_)->id();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:115
// [4] QWebEngineDownloadItem::DownloadState state()
extern "C" Q_DECL_EXPORT
QWebEngineDownloadItem::DownloadState C_ZNK22QWebEngineDownloadItem5stateEv(void *this_) {
  return (QWebEngineDownloadItem::DownloadState)((QWebEngineDownloadItem*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:116
// [8] qint64 totalBytes()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK22QWebEngineDownloadItem10totalBytesEv(void *this_) {
  return (qint64)((QWebEngineDownloadItem*)this_)->totalBytes();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:117
// [8] qint64 receivedBytes()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK22QWebEngineDownloadItem13receivedBytesEv(void *this_) {
  return (qint64)((QWebEngineDownloadItem*)this_)->receivedBytes();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:118
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QWebEngineDownloadItem3urlEv(void *this_) {
  auto rv = ((QWebEngineDownloadItem*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:119
// [8] QString mimeType()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZNK22QWebEngineDownloadItem8mimeTypeEv(void *this_) {
  auto rv = ((QWebEngineDownloadItem*)this_)->mimeType();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:120
// [8] QString path()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QWebEngineDownloadItem4pathEv(void *this_) {
  auto rv = ((QWebEngineDownloadItem*)this_)->path();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:121
// [-2] void setPath(QString)
extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineDownloadItem7setPathE7QString(void *this_, QString* path) {
  ((QWebEngineDownloadItem*)this_)->setPath(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:122
// [1] bool isFinished()
extern "C" Q_DECL_EXPORT
bool C_ZNK22QWebEngineDownloadItem10isFinishedEv(void *this_) {
  return (bool)((QWebEngineDownloadItem*)this_)->isFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:123
// [1] bool isPaused()
extern "C" Q_DECL_EXPORT
bool C_ZNK22QWebEngineDownloadItem8isPausedEv(void *this_) {
  return (bool)((QWebEngineDownloadItem*)this_)->isPaused();
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:124
// [4] QWebEngineDownloadItem::SavePageFormat savePageFormat()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
QWebEngineDownloadItem::SavePageFormat C_ZNK22QWebEngineDownloadItem14savePageFormatEv(void *this_) {
  return (QWebEngineDownloadItem::SavePageFormat)((QWebEngineDownloadItem*)this_)->savePageFormat();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:125
// [-2] void setSavePageFormat(QWebEngineDownloadItem::SavePageFormat)
extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineDownloadItem17setSavePageFormatENS_14SavePageFormatE(void *this_, QWebEngineDownloadItem::SavePageFormat format) {
  ((QWebEngineDownloadItem*)this_)->setSavePageFormat(format);
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:126
// [4] QWebEngineDownloadItem::DownloadType type()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
QWebEngineDownloadItem::DownloadType C_ZNK22QWebEngineDownloadItem4typeEv(void *this_) {
  return (QWebEngineDownloadItem::DownloadType)((QWebEngineDownloadItem*)this_)->type();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:127
// [4] QWebEngineDownloadItem::DownloadInterruptReason interruptReason()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
QWebEngineDownloadItem::DownloadInterruptReason C_ZNK22QWebEngineDownloadItem15interruptReasonEv(void *this_) {
  return (QWebEngineDownloadItem::DownloadInterruptReason)((QWebEngineDownloadItem*)this_)->interruptReason();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:128
// [8] QString interruptReasonString()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void* C_ZNK22QWebEngineDownloadItem21interruptReasonStringEv(void *this_) {
  auto rv = ((QWebEngineDownloadItem*)this_)->interruptReasonString();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:131
// [-2] void accept()
extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineDownloadItem6acceptEv(void *this_) {
  ((QWebEngineDownloadItem*)this_)->accept();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:132
// [-2] void cancel()
extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineDownloadItem6cancelEv(void *this_) {
  ((QWebEngineDownloadItem*)this_)->cancel();
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:133
// [-2] void pause()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineDownloadItem5pauseEv(void *this_) {
  ((QWebEngineDownloadItem*)this_)->pause();
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:134
// [-2] void resume()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineDownloadItem6resumeEv(void *this_) {
  ((QWebEngineDownloadItem*)this_)->resume();
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:137
// [-2] void finished()
extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineDownloadItem8finishedEv(void *this_) {
  ((QWebEngineDownloadItem*)this_)->finished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:138
// [-2] void stateChanged(QWebEngineDownloadItem::DownloadState)
extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineDownloadItem12stateChangedENS_13DownloadStateE(void *this_, QWebEngineDownloadItem::DownloadState state) {
  ((QWebEngineDownloadItem*)this_)->stateChanged(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:139
// [-2] void downloadProgress(qint64, qint64)
extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineDownloadItem16downloadProgressExx(void *this_, qint64 bytesReceived, qint64 bytesTotal) {
  ((QWebEngineDownloadItem*)this_)->downloadProgress(bytesReceived, bytesTotal);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:140
// [-2] void isPausedChanged(bool)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineDownloadItem15isPausedChangedEb(void *this_, bool isPaused) {
  ((QWebEngineDownloadItem*)this_)->isPausedChanged(isPaused);
}
#endif // QT_VERSION >= 0x050a00

//  main block end
