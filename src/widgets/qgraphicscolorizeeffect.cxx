//  header block begin
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#include <qgraphicseffect.h>
#include <QtWidgets>

// QGraphicsColorizeEffect is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:147
// [-2] void draw(class QPainter *)
extern "C"
void* callback_ZN23QGraphicsColorizeEffect4drawEP8QPainter = 0;
extern "C" void set_callback_ZN23QGraphicsColorizeEffect4drawEP8QPainter(void*cbfn)
{ callback_ZN23QGraphicsColorizeEffect4drawEP8QPainter = cbfn; }

class MyQGraphicsColorizeEffect : public QGraphicsColorizeEffect {
public:
MyQGraphicsColorizeEffect(QObject * parent) : QGraphicsColorizeEffect(parent) {}
// void draw(class QPainter *)
// void draw(class QPainter *)
virtual void draw(QPainter * painter) {
  if (callback_ZN23QGraphicsColorizeEffect4drawEP8QPainter != 0) {
  // callback_ZN23QGraphicsColorizeEffect4drawEP8QPainter(painter);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:128
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK23QGraphicsColorizeEffect10metaObjectEv(void *this_) {
  return (void*)((QGraphicsColorizeEffect*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:132
// [-2] void QGraphicsColorizeEffect(class QObject *)
extern "C"
void* C_ZN23QGraphicsColorizeEffectC1EP7QObject(QObject * parent) {
  (MyQGraphicsColorizeEffect*)(0);
  return  new MyQGraphicsColorizeEffect(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:133
// [-2] void ~QGraphicsColorizeEffect()
extern "C"
void C_ZN23QGraphicsColorizeEffectD1Ev(void *this_) {
  delete (QGraphicsColorizeEffect*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:135
// [16] QColor color()
extern "C"
void* C_ZNK23QGraphicsColorizeEffect5colorEv(void *this_) {
  auto rv = ((QGraphicsColorizeEffect*)this_)->color();
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:136
// [8] qreal strength()
extern "C"
qreal C_ZNK23QGraphicsColorizeEffect8strengthEv(void *this_) {
  return (qreal)((QGraphicsColorizeEffect*)this_)->strength();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:139
// [-2] void setColor(const class QColor &)
extern "C"
void C_ZN23QGraphicsColorizeEffect8setColorERK6QColor(void *this_, const QColor & c) {
  ((QGraphicsColorizeEffect*)this_)->setColor(c);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:140
// [-2] void setStrength(qreal)
extern "C"
void C_ZN23QGraphicsColorizeEffect11setStrengthEd(void *this_, qreal strength) {
  ((QGraphicsColorizeEffect*)this_)->setStrength(strength);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:143
// [-2] void colorChanged(const class QColor &)
extern "C"
void C_ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(void *this_, const QColor & color) {
  ((QGraphicsColorizeEffect*)this_)->colorChanged(color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:144
// [-2] void strengthChanged(qreal)
extern "C"
void C_ZN23QGraphicsColorizeEffect15strengthChangedEd(void *this_, qreal strength) {
  ((QGraphicsColorizeEffect*)this_)->strengthChanged(strength);
}
//  main block end
