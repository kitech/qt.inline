//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QHoverEvent is pure virtual: false
//  header block end

//  main block begin

class MyQHoverEvent : public QHoverEvent {
public:
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:158
// [-2] void ~QHoverEvent()
extern "C"
void C_ZN11QHoverEventD1Ev(void *this_) {
  delete (QHoverEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:161
// [8] QPoint pos()
extern "C"
void* C_ZNK11QHoverEvent3posEv(void *this_) {
  auto rv = ((QHoverEvent*)this_)->pos();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:162
// [8] QPoint oldPos()
extern "C"
void* C_ZNK11QHoverEvent6oldPosEv(void *this_) {
  auto rv = ((QHoverEvent*)this_)->oldPos();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:165
// [16] const QPointF & posF()
extern "C"
void* C_ZNK11QHoverEvent4posFEv(void *this_) {
  auto& rv = ((QHoverEvent*)this_)->posF();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:166
// [16] const QPointF & oldPosF()
extern "C"
void* C_ZNK11QHoverEvent7oldPosFEv(void *this_) {
  auto& rv = ((QHoverEvent*)this_)->oldPosF();
return new QPointF(rv);
}
//  main block end
