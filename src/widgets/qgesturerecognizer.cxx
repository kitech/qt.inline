//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgesturerecognizer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesturerecognizer.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGestureRecognizer is pure virtual: true
// QGestureRecognizer has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGestureRecognizer_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGestureRecognizer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGestureRecognizer_t qt_meta_stringdata_MyQGestureRecognizer = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQGestureRecognizer"
  },
  "MyQGestureRecognizer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGestureRecognizer[] = {
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
class Q_DECL_EXPORT MyQGestureRecognizer : public QGestureRecognizer {
public:
  virtual ~MyQGestureRecognizer() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QGestureRecognizer::Result recognize(QGesture *, QObject *, QEvent *)
  virtual QGestureRecognizer::Result recognize(QGesture * state, QObject * watched, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"recognize", &handled, 3, (uint64_t)state, (uint64_t)watched, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGestureRecognizer::Result)(int)(irv);
      // Typedef Record QFlags<QGestureRecognizer::ResultFlag>
    } else {
    return (QGestureRecognizer::Result){};
  }
  }

// void QGestureRecognizer()
MyQGestureRecognizer() : QGestureRecognizer() {}
};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:81
// [4] QGestureRecognizer::Result recognize(QGesture *, QObject *, QEvent *)
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:77
// [-2] void QGestureRecognizer()
extern "C" Q_DECL_EXPORT
void* C_ZN18QGestureRecognizerC2Ev() {
  return 0; // new QGestureRecognizer();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:78
// [-2] void ~QGestureRecognizer()
extern "C" Q_DECL_EXPORT
void C_ZN18QGestureRecognizerD2Ev(void *this_) {
  delete (QGestureRecognizer*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:80
// [8] QGesture * create(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QGestureRecognizer6createEP7QObject(void *this_, QObject * target) {
  return (void*)((QGestureRecognizer*)this_)->create(target);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:81
// [4] QGestureRecognizer::Result recognize(QGesture *, QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
QGestureRecognizer::Result* C_ZN18QGestureRecognizer9recognizeEP8QGestureP7QObjectP6QEvent(void *this_, QGesture * state, QObject * watched, QEvent * event) {
  auto rv = ((QGestureRecognizer*)this_)->recognize(state, watched, event);
return new QGestureRecognizer::Result(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:83
// [-2] void reset(QGesture *)
extern "C" Q_DECL_EXPORT
void C_ZN18QGestureRecognizer5resetEP8QGesture(void *this_, QGesture * state) {
  ((QGestureRecognizer*)this_)->reset(state);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:85
// [4] Qt::GestureType registerRecognizer(QGestureRecognizer *)
extern "C" Q_DECL_EXPORT
Qt::GestureType C_ZN18QGestureRecognizer18registerRecognizerEPS_(QGestureRecognizer * recognizer) {
  return (Qt::GestureType)QGestureRecognizer::registerRecognizer(recognizer);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:86
// [-2] void unregisterRecognizer(Qt::GestureType)
extern "C" Q_DECL_EXPORT
void C_ZN18QGestureRecognizer20unregisterRecognizerEN2Qt11GestureTypeE(Qt::GestureType type_) {
  QGestureRecognizer::unregisterRecognizer(type_);
}

//  main block end
