//  header block begin
// /usr/include/qt/QtCore/qpoint.h
#include <qpoint.h>
#include <QtCore>

// QPoint is pure virtual: false
// QPoint has virtual projected: false
//  header block end

//  main block begin

class MyQPoint : public QPoint {
public:
  virtual ~MyQPoint() {}
// void QPoint()
MyQPoint() : QPoint() {}
// void QPoint(int, int)
MyQPoint(int xpos, int ypos) : QPoint(xpos, ypos) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:55
// [-2] void QPoint()
extern "C"
void* C_ZN6QPointC2Ev() {
  return  new QPoint();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:56
// [-2] void QPoint(int, int)
extern "C"
void* C_ZN6QPointC2Eii(int xpos, int ypos) {
  return  new QPoint(xpos, ypos);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:58
// [1] bool isNull()
extern "C"
bool C_ZNK6QPoint6isNullEv(void *this_) {
  return (bool)((QPoint*)this_)->isNull();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:60
// [4] int x()
extern "C"
int C_ZNK6QPoint1xEv(void *this_) {
  return (int)((QPoint*)this_)->x();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:61
// [4] int y()
extern "C"
int C_ZNK6QPoint1yEv(void *this_) {
  return (int)((QPoint*)this_)->y();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:62
// [-2] void setX(int)
extern "C"
void C_ZN6QPoint4setXEi(void *this_, int x) {
  ((QPoint*)this_)->setX(x);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:63
// [-2] void setY(int)
extern "C"
void C_ZN6QPoint4setYEi(void *this_, int y) {
  ((QPoint*)this_)->setY(y);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:65
// [4] int manhattanLength()
extern "C"
int C_ZNK6QPoint15manhattanLengthEv(void *this_) {
  return (int)((QPoint*)this_)->manhattanLength();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:67
// [4] int & rx()
extern "C"
void* C_ZN6QPoint2rxEv(void *this_) {
  auto& rv = ((QPoint*)this_)->rx();
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:68
// [4] int & ry()
extern "C"
void* C_ZN6QPoint2ryEv(void *this_) {
  auto& rv = ((QPoint*)this_)->ry();
return &rv;
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:79
// [4] int dotProduct(const class QPoint &, const class QPoint &)
extern "C"
int C_ZN6QPoint10dotProductERKS_S1_(const QPoint & p1, const QPoint & p2) {
  return (int)QPoint::dotProduct(p1, p2);
}
//  main block end
