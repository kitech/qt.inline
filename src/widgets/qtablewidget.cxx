//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(tablewidget)
// /usr/include/qt/QtWidgets/qtablewidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtablewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTableWidget is pure virtual: false false
// QTableWidget has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTableWidget_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTableWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTableWidget_t qt_meta_stringdata_MyQTableWidget = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQTableWidget"
  },
  "MyQTableWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTableWidget[] = {
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
class Q_DECL_EXPORT MyQTableWidget : public QTableWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTableWidget::staticMetaObject,
  qt_meta_stringdata_MyQTableWidget.data,
  qt_meta_data_MyQTableWidget,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQTableWidget.stringdata0))
      return static_cast<void*>(this);
  return QTableWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTableWidget::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQTableWidget() {}
// void QTableWidget(QWidget *)
MyQTableWidget(QWidget * parent) : QTableWidget(parent) {}
// void QTableWidget(int, int, QWidget *)
MyQTableWidget(int rows, int columns, QWidget * parent) : QTableWidget(rows, columns, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTableWidget::event(e);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [8] QStringList mimeTypes()
  virtual QStringList mimeTypes() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mimeTypes", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return QTableWidget::mimeTypes();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QMimeData * mimeData(const QList<QTableWidgetItem *>)
  virtual QMimeData * mimeData(const QList<QTableWidgetItem *> items) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mimeData", &handled, 1, (uint64_t)&items, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMimeData *)(irv);
      // Pointer Pointer QMimeData *
    } else {
    return QTableWidget::mimeData(items);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool dropMimeData(int, int, const QMimeData *, Qt::DropAction)
  virtual bool dropMimeData(int row, int column, const QMimeData * data, Qt::DropAction action)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropMimeData", &handled, 4, (uint64_t)row, (uint64_t)column, (uint64_t)data, (uint64_t)action, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTableWidget::dropMimeData(row, column, data, action);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] Qt::DropActions supportedDropActions()
  virtual Qt::DropActions supportedDropActions() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedDropActions", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (Qt::DropActions)(int)(irv);
      // Elaborated Record QFlags<Qt::DropAction>
    } else {
    return QTableWidget::supportedDropActions();
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void dropEvent(QDropEvent *)
  virtual void dropEvent(QDropEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableWidget::dropEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTableWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTableWidget* qo = (MyQTableWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtablewidget(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:230
// [8] QString tr(const char *, const char *, int) 
// (12)qm1346991212 (28)_ZN12QTableWidget2trEPKcS1_i
//static
/*void qm1346991212(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTableWidget::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTableWidget::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:236
// [-2] void QTableWidget(QWidget *) 
// (12)qm1001403885 (29)_ZN12QTableWidgetC2EP7QWidget
/*void* qm1001403885(QWidget * parent)*/{
  auto _nilp = (MyQTableWidget*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QTableWidget(parent);
  this_ =  new MyQTableWidget(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:237
// [-2] void QTableWidget(int, int, QWidget *) 
// (12)qm2159830923 (31)_ZN12QTableWidgetC2EiiP7QWidget
/*void* qm2159830923(int rows, int columns, QWidget * parent)*/{
  auto _nilp = (MyQTableWidget*)(0);
  int rows = *(int*)this_; int columns = *(int*)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QTableWidget(rows, columns, parent);
  this_ =  new MyQTableWidget(rows, columns, parent);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:283
// [-2] void removeCellWidget(int, int) 
// (12)qm3958293794 (38)_ZN12QTableWidget16removeCellWidgetEii
//static
/*void qm3958293794(int row, int column)*/ {
  int row = *(int*)this_; int column = *(int*)this_;
  (void) ((QTableWidget*)this_)->removeCellWidget(row, column);
   auto xptr = (void (QTableWidget::*)(int, int) ) &QTableWidget::removeCellWidget;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:301
// [8] QTableWidgetItem * itemAt(int, int) const
// (12)qm2961253549 (28)_ZNK12QTableWidget6itemAtEii
//static
/*void qm2961253549(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QTableWidget*)this_)->itemAt(x, y);
   auto xptr = (QTableWidgetItem * (QTableWidget::*)(int, int) const ) &QTableWidget::itemAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QTableWidgetD2Ev(void *this_)*/ {
  delete (QTableWidget*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtablewidget
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(tablewidget)
#endif // #ifndef QT_MINIMAL
//  footer block end
