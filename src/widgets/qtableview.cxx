//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(tableview)
// /usr/include/qt/QtWidgets/qtableview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtableview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTableView is pure virtual: false false
// QTableView has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTableView_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTableView_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTableView_t qt_meta_stringdata_MyQTableView = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQTableView"
  },
  "MyQTableView"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTableView[] = {
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
class Q_DECL_EXPORT MyQTableView : public QTableView {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTableView::staticMetaObject,
  qt_meta_stringdata_MyQTableView.data,
  qt_meta_data_MyQTableView,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTableView.stringdata0))
      return static_cast<void*>(this);
  return QTableView::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTableView::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTableView() {}
// void QTableView(QWidget *)
MyQTableView(QWidget * parent) : QTableView(parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [192] QStyleOptionViewItem viewOptions()
  virtual QStyleOptionViewItem viewOptions() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewOptions", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStyleOptionViewItem){};}
    auto prv = (QStyleOptionViewItem*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStyleOptionViewItem
    } else {
    return QTableView::viewOptions();
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::paintEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::timerEvent(event);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [4] int horizontalOffset()
  virtual int horizontalOffset() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QTableView::horizontalOffset();
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [4] int verticalOffset()
  virtual int verticalOffset() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QTableView::verticalOffset();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [24] QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveCursor", &handled, 2, (uint64_t)cursorAction, (uint64_t)modifiers, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QModelIndex){};}
    auto prv = (QModelIndex*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QModelIndex
    } else {
    return QTableView::moveCursor(cursorAction, modifiers);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSelection", &handled, 2, (uint64_t)&rect, (uint64_t)command, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::setSelection(rect, command);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [8] QRegion visualRegionForSelection(const QItemSelection &)
  virtual QRegion visualRegionForSelection(const QItemSelection & selection) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"visualRegionForSelection", &handled, 1, (uint64_t)&selection, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRegion){};}
    auto prv = (QRegion*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRegion
    } else {
    return QTableView::visualRegionForSelection(selection);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QModelIndexList selectedIndexes()
  virtual QModelIndexList selectedIndexes() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectedIndexes", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndexList*)(irv);
      // Typedef Record QList<QModelIndex>
    } else {
    return QTableView::selectedIndexes();
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void updateGeometries()
  virtual void updateGeometries()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::updateGeometries();
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [8] QSize viewportSizeHint()
  virtual QSize viewportSizeHint() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return QTableView::viewportSizeHint();
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [4] int sizeHintForRow(int)
  virtual int sizeHintForRow(int row) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHintForRow", &handled, 1, (uint64_t)row, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QTableView::sizeHintForRow(row);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [4] int sizeHintForColumn(int)
  virtual int sizeHintForColumn(int column) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHintForColumn", &handled, 1, (uint64_t)column, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QTableView::sizeHintForColumn(column);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void verticalScrollbarAction(int)
  virtual void verticalScrollbarAction(int action)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::verticalScrollbarAction(action);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void horizontalScrollbarAction(int)
  virtual void horizontalScrollbarAction(int action)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::horizontalScrollbarAction(action);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool isIndexHidden(const QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isIndexHidden", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTableView::isIndexHidden(index);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void selectionChanged(const QItemSelection &, const QItemSelection &)
  virtual void selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectionChanged", &handled, 2, (uint64_t)&selected, (uint64_t)&deselected, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::selectionChanged(selected, deselected);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & previous)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&previous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::currentChanged(current, previous);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTableView_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTableView* qo = (MyQTableView*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtableview(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm1053754292 (26)_ZN10QTableView2trEPKcS1_i
//static
/*void qm1053754292(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTableView::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTableView::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QTableViewD2Ev(void *this_)*/ {
  delete (QTableView*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtableview
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(tableview)
#endif // #ifndef QT_MINIMAL
//  footer block end
