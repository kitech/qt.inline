//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QDropEvent is pure virtual: false false
// QDropEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDropEvent_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDropEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDropEvent_t qt_meta_stringdata_MyQDropEvent = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQDropEvent"
  },
  "MyQDropEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDropEvent[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQDropEvent : public QDropEvent {
public:
  virtual ~MyQDropEvent() {}
// void QDropEvent(const QPointF &, Qt::DropActions, const QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, QEvent::Type)
MyQDropEvent(const QPointF & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type_) : QDropEvent(pos, actions, data, buttons, modifiers, type_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdropevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:654
// [8] QPoint pos() const
// (12)qm3399566694 (22)_ZNK10QDropEvent3posEv
//static
/*void qm3399566694()*/ {
  ;
  (void) ((QDropEvent*)this_)->pos();
   auto xptr = (QPoint (QDropEvent::*)() const ) &QDropEvent::pos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:655
// [16] const QPointF & posF() const
// (12)qm4243962699 (23)_ZNK10QDropEvent4posFEv
//static
/*void qm4243962699()*/ {
  ;
  (void) ((QDropEvent*)this_)->posF();
   auto xptr = (const QPointF & (QDropEvent::*)() const ) &QDropEvent::posF;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:656
// [4] Qt::MouseButtons mouseButtons() const
// (12)qm3813067481 (32)_ZNK10QDropEvent12mouseButtonsEv
//static
/*void qm3813067481()*/ {
  ;
  (void) ((QDropEvent*)this_)->mouseButtons();
   auto xptr = (QFlags<Qt::MouseButton> (QDropEvent::*)() const ) &QDropEvent::mouseButtons;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:657
// [4] Qt::KeyboardModifiers keyboardModifiers() const
// (12)qm1359663015 (37)_ZNK10QDropEvent17keyboardModifiersEv
//static
/*void qm1359663015()*/ {
  ;
  (void) ((QDropEvent*)this_)->keyboardModifiers();
   auto xptr = (QFlags<Qt::KeyboardModifier> (QDropEvent::*)() const ) &QDropEvent::keyboardModifiers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:659
// [4] Qt::DropActions possibleActions() const
// (12)qm2755467639 (35)_ZNK10QDropEvent15possibleActionsEv
//static
/*void qm2755467639()*/ {
  ;
  (void) ((QDropEvent*)this_)->possibleActions();
   auto xptr = (QFlags<Qt::DropAction> (QDropEvent::*)() const ) &QDropEvent::possibleActions;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:660
// [4] Qt::DropAction proposedAction() const
// (12)qm1880620216 (34)_ZNK10QDropEvent14proposedActionEv
//static
/*void qm1880620216()*/ {
  ;
  (void) ((QDropEvent*)this_)->proposedAction();
   auto xptr = (Qt::DropAction (QDropEvent::*)() const ) &QDropEvent::proposedAction;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:661
// [-2] void acceptProposedAction() 
// (12)qm1097504622 (39)_ZN10QDropEvent20acceptProposedActionEv
//static
/*void qm1097504622()*/ {
  ;
  (void) ((QDropEvent*)this_)->acceptProposedAction();
   auto xptr = (void (QDropEvent::*)() ) &QDropEvent::acceptProposedAction;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:663
// [4] Qt::DropAction dropAction() const
// (12)qm2641787447 (30)_ZNK10QDropEvent10dropActionEv
//static
/*void qm2641787447()*/ {
  ;
  (void) ((QDropEvent*)this_)->dropAction();
   auto xptr = (Qt::DropAction (QDropEvent::*)() const ) &QDropEvent::dropAction;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:667
// [8] const QMimeData * mimeData() const
// (12)qm3306306225 (27)_ZNK10QDropEvent8mimeDataEv
//static
/*void qm3306306225()*/ {
  ;
  (void) ((QDropEvent*)this_)->mimeData();
   auto xptr = (const QMimeData * (QDropEvent::*)() const ) &QDropEvent::mimeData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QDropEventD2Ev(void *this_)*/ {
  delete (QDropEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdropevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
