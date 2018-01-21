//  header block begin
// /usr/include/qt/QtGui/qpdfwriter.h
#include <qpdfwriter.h>
#include <QtGui>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtGui/qpdfwriter.h:58
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QPdfWriter10metaObjectEv(void *this_) {
  /*return*/ ((QPdfWriter*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qpdfwriter.h:60
// void QPdfWriter(const class QString &)
extern "C"
void* C_ZN10QPdfWriterC1ERK7QString(const QString & filename) {
  return new QPdfWriter(filename);
}
// /usr/include/qt/QtGui/qpdfwriter.h:61
// void QPdfWriter(class QIODevice *)
extern "C"
void* C_ZN10QPdfWriterC1EP9QIODevice(QIODevice * device) {
  return new QPdfWriter(device);
}
// virtual
// /usr/include/qt/QtGui/qpdfwriter.h:62
// void ~QPdfWriter()
extern "C"
void C_ZN10QPdfWriterD1Ev(void *this_) {
  delete (QPdfWriter*)(this_);
}
// /usr/include/qt/QtGui/qpdfwriter.h:64
// QString title()
extern "C"
void C_ZNK10QPdfWriter5titleEv(void *this_) {
  /*return*/ ((QPdfWriter*)this_)->title();
}
// /usr/include/qt/QtGui/qpdfwriter.h:65
// void setTitle(const class QString &)
extern "C"
void C_ZN10QPdfWriter8setTitleERK7QString(void *this_, const QString & title) {
  ((QPdfWriter*)this_)->setTitle(title);
}
// /usr/include/qt/QtGui/qpdfwriter.h:67
// QString creator()
extern "C"
void C_ZNK10QPdfWriter7creatorEv(void *this_) {
  /*return*/ ((QPdfWriter*)this_)->creator();
}
// /usr/include/qt/QtGui/qpdfwriter.h:68
// void setCreator(const class QString &)
extern "C"
void C_ZN10QPdfWriter10setCreatorERK7QString(void *this_, const QString & creator) {
  ((QPdfWriter*)this_)->setCreator(creator);
}
// virtual
// /usr/include/qt/QtGui/qpdfwriter.h:70
// bool newPage()
extern "C"
void C_ZN10QPdfWriter7newPageEv(void *this_) {
  /*return*/ ((QPdfWriter*)this_)->newPage();
}
// /usr/include/qt/QtGui/qpdfwriter.h:72
// void setResolution(int)
extern "C"
void C_ZN10QPdfWriter13setResolutionEi(void *this_, int resolution) {
  ((QPdfWriter*)this_)->setResolution(resolution);
}
// /usr/include/qt/QtGui/qpdfwriter.h:73
// int resolution()
extern "C"
void C_ZNK10QPdfWriter10resolutionEv(void *this_) {
  /*return*/ ((QPdfWriter*)this_)->resolution();
}
// virtual
// /usr/include/qt/QtGui/qpdfwriter.h:86
// void setPageSize(enum QPagedPaintDevice::PageSize)
extern "C"
void C_ZN10QPdfWriter11setPageSizeEN17QPagedPaintDevice8PageSizeE(void *this_, QPagedPaintDevice::PageSize size) {
  ((QPdfWriter*)this_)->setPageSize(size);
}
// virtual
// /usr/include/qt/QtGui/qpdfwriter.h:87
// void setPageSizeMM(const class QSizeF &)
extern "C"
void C_ZN10QPdfWriter13setPageSizeMMERK6QSizeF(void *this_, const QSizeF & size) {
  ((QPdfWriter*)this_)->setPageSizeMM(size);
}
// virtual
// /usr/include/qt/QtGui/qpdfwriter.h:89
// void setMargins(const struct QPagedPaintDevice::Margins &)
extern "C"
void C_ZN10QPdfWriter10setMarginsERKN17QPagedPaintDevice7MarginsE(void *this_, const QPagedPaintDevice::Margins & m) {
  ((QPdfWriter*)this_)->setMargins(m);
}
//  main block end
