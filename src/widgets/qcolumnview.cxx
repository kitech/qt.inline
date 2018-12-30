//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(columnview)
// since 0x040300
// /usr/include/qt/QtWidgets/qcolumnview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcolumnview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QColumnView is pure virtual: false
// QColumnView has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQColumnView_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQColumnView_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQColumnView_t qt_meta_stringdata_MyQColumnView = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQColumnView"
  },
  "MyQColumnView"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQColumnView[] = {
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
class Q_DECL_EXPORT MyQColumnView : public QColumnView {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QColumnView::staticMetaObject,
  qt_meta_stringdata_MyQColumnView.data,
  qt_meta_data_MyQColumnView,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQColumnView.stringdata0))
      return static_cast<void*>(this);
  return QColumnView::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QColumnView::qt_metacall(_c, _id, _a);
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
  virtual ~MyQColumnView() {}
// void QColumnView(QWidget *)
MyQColumnView(QWidget * parent) : QColumnView(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool isIndexHidden(const QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isIndexHidden", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QColumnView::isIndexHidden(index);
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
    return QColumnView::moveCursor(cursorAction, modifiers);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QColumnView::resizeEvent(event);
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
    QColumnView::setSelection(rect, command);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QRegion visualRegionForSelection(const QItemSelection &)
  virtual QRegion visualRegionForSelection(const QItemSelection & selection) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"visualRegionForSelection", &handled, 1, (uint64_t)&selection, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRegion){};}
    auto prv = (QRegion*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRegion
    } else {
    return QColumnView::visualRegionForSelection(selection);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int horizontalOffset()
  virtual int horizontalOffset() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QColumnView::horizontalOffset();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int verticalOffset()
  virtual int verticalOffset() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QColumnView::verticalOffset();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void rowsInserted(const QModelIndex &, int, int)
  virtual void rowsInserted(const QModelIndex & parent, int start, int end_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowsInserted", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end_, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QColumnView::rowsInserted(parent, start, end_);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & previous)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&previous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QColumnView::currentChanged(current, previous);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QColumnView::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QAbstractItemView * createColumn(const QModelIndex &)
  virtual QAbstractItemView * createColumn(const QModelIndex & rootIndex)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createColumn", &handled, 1, (uint64_t)&rootIndex, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractItemView *)(irv);
      // Pointer Pointer QAbstractItemView *
    } else {
    return QColumnView::createColumn(rootIndex);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QColumnView_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQColumnView* qo = (MyQColumnView*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:88
// [1] bool isIndexHidden(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QColumnView13isIndexHiddenERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QColumnView*)this_)->QColumnView::isIndexHidden(*index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:89
// [24] QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN11QColumnView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers) {
  auto rv = ((QColumnView*)this_)->QColumnView::moveCursor(cursorAction, modifiers);
return new QModelIndex(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:90
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QColumnView*)this_)->QColumnView::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:91
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QRect* rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QColumnView*)this_)->QColumnView::setSelection(*rect, command);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:92
// [8] QRegion visualRegionForSelection(const QItemSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QColumnView24visualRegionForSelectionERK14QItemSelection(void *this_, QItemSelection* selection) {
  auto rv = ((QColumnView*)this_)->QColumnView::visualRegionForSelection(*selection);
return new QRegion(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:93
// [4] int horizontalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK11QColumnView16horizontalOffsetEv(void *this_) {
  return (int)((QColumnView*)this_)->QColumnView::horizontalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:94
// [4] int verticalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK11QColumnView14verticalOffsetEv(void *this_) {
  return (int)((QColumnView*)this_)->QColumnView::verticalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:95
// [-2] void rowsInserted(const QModelIndex &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView12rowsInsertedERK11QModelIndexii(void *this_, QModelIndex* parent, int start, int end_) {
  ((QColumnView*)this_)->QColumnView::rowsInserted(*parent, start, end_);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:96
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView14currentChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* previous) {
  ((QColumnView*)this_)->QColumnView::currentChanged(*current, *previous);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:99
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QColumnView*)this_)->QColumnView::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:100
// [8] QAbstractItemView * createColumn(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QColumnView12createColumnERK11QModelIndex(void *this_, QModelIndex* rootIndex) {
  return (void*)((QColumnView*)this_)->QColumnView::createColumn(*rootIndex);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QColumnView10metaObjectEv(void *this_) {
  return (void*)((QColumnView*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QColumnView11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QColumnView*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QColumnView11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QColumnView*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QColumnView2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QColumnView::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QColumnView6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QColumnView::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:58
// [-2] void updatePreviewWidget(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QColumnView*)this_)->updatePreviewWidget(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:61
// [-2] void QColumnView(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QColumnViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQColumnView*)(0);
  return  new MyQColumnView(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:62
// [-2] void ~QColumnView()
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnViewD2Ev(void *this_) {
  delete (QColumnView*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:65
// [24] QModelIndex indexAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QColumnView7indexAtERK6QPoint(void *this_, QPoint* point) {
  auto rv = ((QColumnView*)this_)->indexAt(*point);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:66
// [-2] void scrollTo(const QModelIndex &, QAbstractItemView::ScrollHint)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QColumnView*)this_)->scrollTo(*index, hint);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:67
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QColumnView8sizeHintEv(void *this_) {
  auto rv = ((QColumnView*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:68
// [16] QRect visualRect(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QColumnView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QColumnView*)this_)->visualRect(*index);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:69
// [-2] void setModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QColumnView*)this_)->setModel(model);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:70
// [-2] void setSelectionModel(QItemSelectionModel *)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QColumnView*)this_)->setSelectionModel(selectionModel);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:71
// [-2] void setRootIndex(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QColumnView*)this_)->setRootIndex(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:72
// [-2] void selectAll()
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView9selectAllEv(void *this_) {
  ((QColumnView*)this_)->selectAll();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:75
// [-2] void setResizeGripsVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView21setResizeGripsVisibleEb(void *this_, bool visible) {
  ((QColumnView*)this_)->setResizeGripsVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:76
// [1] bool resizeGripsVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QColumnView18resizeGripsVisibleEv(void *this_) {
  return (bool)((QColumnView*)this_)->resizeGripsVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:78
// [8] QWidget * previewWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QColumnView13previewWidgetEv(void *this_) {
  return (void*)((QColumnView*)this_)->previewWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:79
// [-2] void setPreviewWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView16setPreviewWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QColumnView*)this_)->setPreviewWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:81
// [-2] void setColumnWidths(const QList<int> &)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView15setColumnWidthsERK5QListIiE(void *this_, QList<int>* list) {
  ((QColumnView*)this_)->setColumnWidths(*list);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:82
// [-2] QList<int> columnWidths()
extern "C" Q_DECL_EXPORT
QList<int>* C_ZNK11QColumnView12columnWidthsEv(void *this_) {
  auto rv = ((QColumnView*)this_)->columnWidths();
return new QList<int>(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(columnview)
#endif // #ifndef QT_MINIMAL
//  footer block end
