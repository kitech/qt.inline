// /usr/include/qt/QtGui/qclipboard.h
#include <qclipboard.h>
#include <QtGui>

// virtual
// /usr/include/qt/QtGui/qclipboard.h:56
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QClipboard10metaObjectEv(void *this_) {
  /*return*/ ((QClipboard*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qclipboard.h:64
// void clear(enum QClipboard::Mode)
extern "C"
void C_ZN10QClipboard5clearENS_4ModeE(void *this_, QClipboard::Mode mode) {
  ((QClipboard*)this_)->clear(mode);
}
// /usr/include/qt/QtGui/qclipboard.h:66
// bool supportsSelection()
extern "C"
void C_ZNK10QClipboard17supportsSelectionEv(void *this_) {
  /*return*/ ((QClipboard*)this_)->supportsSelection();
}
// /usr/include/qt/QtGui/qclipboard.h:67
// bool supportsFindBuffer()
extern "C"
void C_ZNK10QClipboard18supportsFindBufferEv(void *this_) {
  /*return*/ ((QClipboard*)this_)->supportsFindBuffer();
}
// /usr/include/qt/QtGui/qclipboard.h:69
// bool ownsSelection()
extern "C"
void C_ZNK10QClipboard13ownsSelectionEv(void *this_) {
  /*return*/ ((QClipboard*)this_)->ownsSelection();
}
// /usr/include/qt/QtGui/qclipboard.h:70
// bool ownsClipboard()
extern "C"
void C_ZNK10QClipboard13ownsClipboardEv(void *this_) {
  /*return*/ ((QClipboard*)this_)->ownsClipboard();
}
// /usr/include/qt/QtGui/qclipboard.h:71
// bool ownsFindBuffer()
extern "C"
void C_ZNK10QClipboard14ownsFindBufferEv(void *this_) {
  /*return*/ ((QClipboard*)this_)->ownsFindBuffer();
}
// /usr/include/qt/QtGui/qclipboard.h:73
// QString text(enum QClipboard::Mode)
extern "C"
void C_ZNK10QClipboard4textENS_4ModeE(void *this_, QClipboard::Mode mode) {
  /*return*/ ((QClipboard*)this_)->text(mode);
}
// /usr/include/qt/QtGui/qclipboard.h:74
// QString text(class QString &, enum QClipboard::Mode)
extern "C"
void C_ZNK10QClipboard4textER7QStringNS_4ModeE(void *this_, QString & subtype, QClipboard::Mode mode) {
  /*return*/ ((QClipboard*)this_)->text(subtype, mode);
}
// /usr/include/qt/QtGui/qclipboard.h:75
// void setText(const class QString &, enum QClipboard::Mode)
extern "C"
void C_ZN10QClipboard7setTextERK7QStringNS_4ModeE(void *this_, const QString & a0, QClipboard::Mode mode) {
  ((QClipboard*)this_)->setText(a0, mode);
}
// /usr/include/qt/QtGui/qclipboard.h:77
// const QMimeData * mimeData(enum QClipboard::Mode)
extern "C"
void C_ZNK10QClipboard8mimeDataENS_4ModeE(void *this_, QClipboard::Mode mode) {
  /*return*/ ((QClipboard*)this_)->mimeData(mode);
}
// /usr/include/qt/QtGui/qclipboard.h:78
// void setMimeData(class QMimeData *, enum QClipboard::Mode)
extern "C"
void C_ZN10QClipboard11setMimeDataEP9QMimeDataNS_4ModeE(void *this_, QMimeData * data, QClipboard::Mode mode) {
  ((QClipboard*)this_)->setMimeData(data, mode);
}
// /usr/include/qt/QtGui/qclipboard.h:80
// QImage image(enum QClipboard::Mode)
extern "C"
void C_ZNK10QClipboard5imageENS_4ModeE(void *this_, QClipboard::Mode mode) {
  /*return*/ ((QClipboard*)this_)->image(mode);
}
// /usr/include/qt/QtGui/qclipboard.h:81
// QPixmap pixmap(enum QClipboard::Mode)
extern "C"
void C_ZNK10QClipboard6pixmapENS_4ModeE(void *this_, QClipboard::Mode mode) {
  /*return*/ ((QClipboard*)this_)->pixmap(mode);
}
// /usr/include/qt/QtGui/qclipboard.h:82
// void setImage(const class QImage &, enum QClipboard::Mode)
extern "C"
void C_ZN10QClipboard8setImageERK6QImageNS_4ModeE(void *this_, const QImage & a0, QClipboard::Mode mode) {
  ((QClipboard*)this_)->setImage(a0, mode);
}
// /usr/include/qt/QtGui/qclipboard.h:83
// void setPixmap(const class QPixmap &, enum QClipboard::Mode)
extern "C"
void C_ZN10QClipboard9setPixmapERK7QPixmapNS_4ModeE(void *this_, const QPixmap & a0, QClipboard::Mode mode) {
  ((QClipboard*)this_)->setPixmap(a0, mode);
}
// /usr/include/qt/QtGui/qclipboard.h:86
// void changed(class QClipboard::Mode)
extern "C"
void C_ZN10QClipboard7changedENS_4ModeE(void *this_, QClipboard::Mode mode) {
  ((QClipboard*)this_)->changed(mode);
}
// /usr/include/qt/QtGui/qclipboard.h:87
// void selectionChanged()
extern "C"
void C_ZN10QClipboard16selectionChangedEv(void *this_) {
  ((QClipboard*)this_)->selectionChanged();
}
// /usr/include/qt/QtGui/qclipboard.h:88
// void findBufferChanged()
extern "C"
void C_ZN10QClipboard17findBufferChangedEv(void *this_) {
  ((QClipboard*)this_)->findBufferChanged();
}
// /usr/include/qt/QtGui/qclipboard.h:89
// void dataChanged()
extern "C"
void C_ZN10QClipboard11dataChangedEv(void *this_) {
  ((QClipboard*)this_)->dataChanged();
}