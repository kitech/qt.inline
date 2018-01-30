//  header block begin
// /usr/include/qt/QtWidgets/qcolormap.h
#include <qcolormap.h>
#include <QtWidgets>

// QColormap is pure virtual: false
// QColormap has virtual projected: false
//  header block end

//  main block begin

class MyQColormap : public QColormap {
public:
  virtual ~MyQColormap() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:60
// [-2] void initialize()
extern "C"
void C_ZN9QColormap10initializeEv() {
  QColormap::initialize();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:61
// [-2] void cleanup()
extern "C"
void C_ZN9QColormap7cleanupEv() {
  QColormap::cleanup();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:63
// [8] QColormap instance(int)
extern "C"
void* C_ZN9QColormap8instanceEi(int screen) {
  auto rv = QColormap::instance(screen);
return new QColormap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:66
// [-2] void ~QColormap()
extern "C"
void C_ZN9QColormapD2Ev(void *this_) {
  delete (QColormap*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:70
// [4] QColormap::Mode mode()
extern "C"
QColormap::Mode C_ZNK9QColormap4modeEv(void *this_) {
  return (QColormap::Mode)((QColormap*)this_)->mode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:72
// [4] int depth()
extern "C"
int C_ZNK9QColormap5depthEv(void *this_) {
  return (int)((QColormap*)this_)->depth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:73
// [4] int size()
extern "C"
int C_ZNK9QColormap4sizeEv(void *this_) {
  return (int)((QColormap*)this_)->size();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:75
// [4] uint pixel(const class QColor &)
extern "C"
uint C_ZNK9QColormap5pixelERK6QColor(void *this_, const QColor & color) {
  return (uint)((QColormap*)this_)->pixel(color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:76
// [16] const QColor colorAt(uint)
extern "C"
void* C_ZNK9QColormap7colorAtEj(void *this_, uint pixel) {
  auto rv = ((QColormap*)this_)->colorAt(pixel);
return new QColor(rv);
}
//  main block end
