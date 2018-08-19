//  header block begin
// /usr/include/qt/QtGui/qclipboard.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qclipboard.h>
#include <QtGui>
#include "callback_inherit.h"

// QClipboard is pure virtual: false
// QClipboard has virtual projected: false
//  header block end

//  main block begin

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QClipboard10metaObjectEv(void *this_) {
  return (void*)((QClipboard*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QClipboard11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QClipboard*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QClipboard11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QClipboard*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QClipboard2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QClipboard::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QClipboard6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QClipboard::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:65
// [-2] void clear(QClipboard::Mode)
extern "C" Q_DECL_EXPORT
void C_ZN10QClipboard5clearENS_4ModeE(void *this_, QClipboard::Mode mode) {
  ((QClipboard*)this_)->clear(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:67
// [1] bool supportsSelection()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QClipboard17supportsSelectionEv(void *this_) {
  return (bool)((QClipboard*)this_)->supportsSelection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:68
// [1] bool supportsFindBuffer()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QClipboard18supportsFindBufferEv(void *this_) {
  return (bool)((QClipboard*)this_)->supportsFindBuffer();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:70
// [1] bool ownsSelection()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QClipboard13ownsSelectionEv(void *this_) {
  return (bool)((QClipboard*)this_)->ownsSelection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:71
// [1] bool ownsClipboard()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QClipboard13ownsClipboardEv(void *this_) {
  return (bool)((QClipboard*)this_)->ownsClipboard();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qclipboard.h:72
// [1] bool ownsFindBuffer()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK10QClipboard14ownsFindBufferEv(void *this_) {
  return (bool)((QClipboard*)this_)->ownsFindBuffer();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:74
// [8] QString text(QClipboard::Mode)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QClipboard4textENS_4ModeE(void *this_, QClipboard::Mode mode) {
  auto rv = ((QClipboard*)this_)->text(mode);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:75
// [8] QString text(QString &, QClipboard::Mode)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QClipboard4textER7QStringNS_4ModeE(void *this_, QString* subtype, QClipboard::Mode mode) {
  auto rv = ((QClipboard*)this_)->text(*subtype, mode);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:76
// [-2] void setText(const QString &, QClipboard::Mode)
extern "C" Q_DECL_EXPORT
void C_ZN10QClipboard7setTextERK7QStringNS_4ModeE(void *this_, QString* arg0, QClipboard::Mode mode) {
  ((QClipboard*)this_)->setText(*arg0, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:78
// [8] const QMimeData * mimeData(QClipboard::Mode)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QClipboard8mimeDataENS_4ModeE(void *this_, QClipboard::Mode mode) {
  return (void*)((QClipboard*)this_)->mimeData(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:79
// [-2] void setMimeData(QMimeData *, QClipboard::Mode)
extern "C" Q_DECL_EXPORT
void C_ZN10QClipboard11setMimeDataEP9QMimeDataNS_4ModeE(void *this_, QMimeData * data, QClipboard::Mode mode) {
  ((QClipboard*)this_)->setMimeData(data, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:81
// [32] QImage image(QClipboard::Mode)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QClipboard5imageENS_4ModeE(void *this_, QClipboard::Mode mode) {
  auto rv = ((QClipboard*)this_)->image(mode);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:82
// [32] QPixmap pixmap(QClipboard::Mode)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QClipboard6pixmapENS_4ModeE(void *this_, QClipboard::Mode mode) {
  auto rv = ((QClipboard*)this_)->pixmap(mode);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:83
// [-2] void setImage(const QImage &, QClipboard::Mode)
extern "C" Q_DECL_EXPORT
void C_ZN10QClipboard8setImageERK6QImageNS_4ModeE(void *this_, QImage* arg0, QClipboard::Mode mode) {
  ((QClipboard*)this_)->setImage(*arg0, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:84
// [-2] void setPixmap(const QPixmap &, QClipboard::Mode)
extern "C" Q_DECL_EXPORT
void C_ZN10QClipboard9setPixmapERK7QPixmapNS_4ModeE(void *this_, QPixmap* arg0, QClipboard::Mode mode) {
  ((QClipboard*)this_)->setPixmap(*arg0, mode);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qclipboard.h:87
// [-2] void changed(QClipboard::Mode)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN10QClipboard7changedENS_4ModeE(void *this_, QClipboard::Mode mode) {
  ((QClipboard*)this_)->changed(mode);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:88
// [-2] void selectionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QClipboard16selectionChangedEv(void *this_) {
  ((QClipboard*)this_)->selectionChanged();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qclipboard.h:89
// [-2] void findBufferChanged()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN10QClipboard17findBufferChangedEv(void *this_) {
  ((QClipboard*)this_)->findBufferChanged();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qclipboard.h:90
// [-2] void dataChanged()
extern "C" Q_DECL_EXPORT
void C_ZN10QClipboard11dataChangedEv(void *this_) {
  ((QClipboard*)this_)->dataChanged();
}

//  main block end
