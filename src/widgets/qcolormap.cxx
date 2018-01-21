//  header block begin
// /usr/include/qt/QtWidgets/qcolormap.h
#include <qcolormap.h>
#include <QtWidgets>

//  header block end

//  main block begin
// static
// /usr/include/qt/QtWidgets/qcolormap.h:59
// void initialize()
extern "C"
void C_ZN9QColormap10initializeEv() {
  QColormap::initialize();
}
// static
// /usr/include/qt/QtWidgets/qcolormap.h:60
// void cleanup()
extern "C"
void C_ZN9QColormap7cleanupEv() {
  QColormap::cleanup();
}
// static
// /usr/include/qt/QtWidgets/qcolormap.h:62
// QColormap instance(int)
extern "C"
void C_ZN9QColormap8instanceEi(int screen) {
  /*return*/ QColormap::instance(screen);
}
// /usr/include/qt/QtWidgets/qcolormap.h:65
// void ~QColormap()
extern "C"
void C_ZN9QColormapD1Ev(void *this_) {
  delete (QColormap*)(this_);
}
// /usr/include/qt/QtWidgets/qcolormap.h:69
// QColormap::Mode mode()
extern "C"
void C_ZNK9QColormap4modeEv(void *this_) {
  /*return*/ ((QColormap*)this_)->mode();
}
// /usr/include/qt/QtWidgets/qcolormap.h:71
// int depth()
extern "C"
void C_ZNK9QColormap5depthEv(void *this_) {
  /*return*/ ((QColormap*)this_)->depth();
}
// /usr/include/qt/QtWidgets/qcolormap.h:72
// int size()
extern "C"
void C_ZNK9QColormap4sizeEv(void *this_) {
  /*return*/ ((QColormap*)this_)->size();
}
// /usr/include/qt/QtWidgets/qcolormap.h:74
// uint pixel(const class QColor &)
extern "C"
void C_ZNK9QColormap5pixelERK6QColor(void *this_, const QColor & color) {
  /*return*/ ((QColormap*)this_)->pixel(color);
}
// /usr/include/qt/QtWidgets/qcolormap.h:75
// const QColor colorAt(uint)
extern "C"
void C_ZNK9QColormap7colorAtEj(void *this_, uint pixel) {
  /*return*/ ((QColormap*)this_)->colorAt(pixel);
}
// /usr/include/qt/QtWidgets/qcolormap.h:77
// const QVector<QColor> colormap()
extern "C"
void C_ZNK9QColormap8colormapEv(void *this_) {
  /*return*/ ((QColormap*)this_)->colormap();
}
//  main block end
