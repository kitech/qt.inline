//  header block begin

#ifndef QT_MINIMAL
// /usr/include/qt/QtWidgets/qtreeview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtreeview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTreeView is pure virtual: false
// QTreeView has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTreeView_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTreeView_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTreeView_t qt_meta_stringdata_MyQTreeView = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQTreeView"
  },
  "MyQTreeView"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTreeView[] = {
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
class Q_DECL_EXPORT MyQTreeView : public QTreeView {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTreeView::staticMetaObject,
  qt_meta_stringdata_MyQTreeView.data,
  qt_meta_data_MyQTreeView,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTreeView.stringdata0))
      return static_cast<void*>(this);
  return QTreeView::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTreeView::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTreeView() {}
// void QTreeView(QWidget *)
MyQTreeView(QWidget * parent) : QTreeView(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void verticalScrollbarValueChanged(int)
  virtual void verticalScrollbarValueChanged(int value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalScrollbarValueChanged", &handled, 1, (uint64_t)value, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::verticalScrollbarValueChanged(value);
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
    QTreeView::scrollContentsBy(dx, dy);
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
    QTreeView::rowsInserted(parent, start, end_);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void rowsAboutToBeRemoved(const QModelIndex &, int, int)
  virtual void rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowsAboutToBeRemoved", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end_, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::rowsAboutToBeRemoved(parent, start, end_);
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
    return QTreeView::moveCursor(cursorAction, modifiers);
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
    return QTreeView::horizontalOffset();
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
    return QTreeView::verticalOffset();
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
    QTreeView::setSelection(rect, command);
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
    return QTreeView::visualRegionForSelection(selection);
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
    return QTreeView::selectedIndexes();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::timerEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::paintEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void drawRow(QPainter *, const QStyleOptionViewItem &, const QModelIndex &)
  virtual void drawRow(QPainter * painter, const QStyleOptionViewItem & options, const QModelIndex & index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawRow", &handled, 3, (uint64_t)painter, (uint64_t)&options, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::drawRow(painter, options, index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void drawBranches(QPainter *, const QRect &, const QModelIndex &)
  virtual void drawBranches(QPainter * painter, const QRect & rect, const QModelIndex & index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawBranches", &handled, 3, (uint64_t)painter, (uint64_t)&rect, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::drawBranches(painter, rect, index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::mouseReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::mouseDoubleClickEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::mouseMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragMoveEvent(QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::dragMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool viewportEvent(QEvent *)
  virtual bool viewportEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTreeView::viewportEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateGeometries()
  virtual void updateGeometries()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::updateGeometries();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QSize viewportSizeHint()
  virtual QSize viewportSizeHint() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return QTreeView::viewportSizeHint();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int sizeHintForColumn(int)
  virtual int sizeHintForColumn(int column) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHintForColumn", &handled, 1, (uint64_t)column, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QTreeView::sizeHintForColumn(column);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void horizontalScrollbarAction(int)
  virtual void horizontalScrollbarAction(int action)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::horizontalScrollbarAction(action);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool isIndexHidden(const QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isIndexHidden", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTreeView::isIndexHidden(index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void selectionChanged(const QItemSelection &, const QItemSelection &)
  virtual void selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectionChanged", &handled, 2, (uint64_t)&selected, (uint64_t)&deselected, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeView::selectionChanged(selected, deselected);
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
    QTreeView::currentChanged(current, previous);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTreeView_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTreeView* qo = (MyQTreeView*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:172
// [-2] void verticalScrollbarValueChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView29verticalScrollbarValueChangedEi(void *this_, int value) {
  ((QTreeView*)this_)->QTreeView::verticalScrollbarValueChanged(value);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:176
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QTreeView*)this_)->QTreeView::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:177
// [-2] void rowsInserted(const QModelIndex &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView12rowsInsertedERK11QModelIndexii(void *this_, QModelIndex* parent, int start, int end_) {
  ((QTreeView*)this_)->QTreeView::rowsInserted(*parent, start, end_);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:178
// [-2] void rowsAboutToBeRemoved(const QModelIndex &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView20rowsAboutToBeRemovedERK11QModelIndexii(void *this_, QModelIndex* parent, int start, int end_) {
  ((QTreeView*)this_)->QTreeView::rowsAboutToBeRemoved(*parent, start, end_);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:180
// [24] QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTreeView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers) {
  auto rv = ((QTreeView*)this_)->QTreeView::moveCursor(cursorAction, modifiers);
return new QModelIndex(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:181
// [4] int horizontalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTreeView16horizontalOffsetEv(void *this_) {
  return (int)((QTreeView*)this_)->QTreeView::horizontalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:182
// [4] int verticalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTreeView14verticalOffsetEv(void *this_) {
  return (int)((QTreeView*)this_)->QTreeView::verticalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:184
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QRect* rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QTreeView*)this_)->QTreeView::setSelection(*rect, command);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:185
// [8] QRegion visualRegionForSelection(const QItemSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTreeView24visualRegionForSelectionERK14QItemSelection(void *this_, QItemSelection* selection) {
  auto rv = ((QTreeView*)this_)->QTreeView::visualRegionForSelection(*selection);
return new QRegion(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:186
// [8] QModelIndexList selectedIndexes()
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK9QTreeView15selectedIndexesEv(void *this_) {
  auto rv = ((QTreeView*)this_)->QTreeView::selectedIndexes();
return new QModelIndexList(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:188
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView10timerEventEP11QTimerEvent(void *this_, QTimerEvent * event) {
  ((QTreeView*)this_)->QTreeView::timerEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:189
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QTreeView*)this_)->QTreeView::paintEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:192
// [-2] void drawRow(QPainter *, const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK9QTreeView7drawRowEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QPainter * painter, QStyleOptionViewItem* options, QModelIndex* index) {
  ((QTreeView*)this_)->QTreeView::drawRow(painter, *options, *index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:195
// [-2] void drawBranches(QPainter *, const QRect &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK9QTreeView12drawBranchesEP8QPainterRK5QRectRK11QModelIndex(void *this_, QPainter * painter, QRect* rect, QModelIndex* index) {
  ((QTreeView*)this_)->QTreeView::drawBranches(painter, *rect, *index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:199
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QTreeView*)this_)->QTreeView::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:200
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QTreeView*)this_)->QTreeView::mouseReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:201
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QTreeView*)this_)->QTreeView::mouseDoubleClickEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:202
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QTreeView*)this_)->QTreeView::mouseMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:203
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QTreeView*)this_)->QTreeView::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:205
// [-2] void dragMoveEvent(QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * event) {
  ((QTreeView*)this_)->QTreeView::dragMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:207
// [1] bool viewportEvent(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QTreeView13viewportEventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QTreeView*)this_)->QTreeView::viewportEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:209
// [-2] void updateGeometries()
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView16updateGeometriesEv(void *this_) {
  ((QTreeView*)this_)->QTreeView::updateGeometries();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:211
// [8] QSize viewportSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTreeView16viewportSizeHintEv(void *this_) {
  auto rv = ((QTreeView*)this_)->QTreeView::viewportSizeHint();
return new QSize(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:213
// [4] int sizeHintForColumn(int)
extern "C" Q_DECL_EXPORT
int C_ZNK9QTreeView17sizeHintForColumnEi(void *this_, int column) {
  return (int)((QTreeView*)this_)->QTreeView::sizeHintForColumn(column);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:217
// [-2] void horizontalScrollbarAction(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView25horizontalScrollbarActionEi(void *this_, int action) {
  ((QTreeView*)this_)->QTreeView::horizontalScrollbarAction(action);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:219
// [1] bool isIndexHidden(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView13isIndexHiddenERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QTreeView*)this_)->QTreeView::isIndexHidden(*index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:220
// [-2] void selectionChanged(const QItemSelection &, const QItemSelection &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView16selectionChangedERK14QItemSelectionS2_(void *this_, QItemSelection* selected, QItemSelection* deselected) {
  ((QTreeView*)this_)->QTreeView::selectionChanged(*selected, *deselected);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:222
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView14currentChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* previous) {
  ((QTreeView*)this_)->QTreeView::currentChanged(*current, *previous);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTreeView10metaObjectEv(void *this_) {
  return (void*)((QTreeView*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTreeView11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTreeView*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QTreeView11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTreeView*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTreeView2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTreeView::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTreeView6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTreeView::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:71
// [-2] void QTreeView(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTreeViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTreeView*)(0);
  return  new MyQTreeView(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:72
// [-2] void ~QTreeView()
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeViewD2Ev(void *this_) {
  delete (QTreeView*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:74
// [-2] void setModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QTreeView*)this_)->setModel(model);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:75
// [-2] void setRootIndex(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QTreeView*)this_)->setRootIndex(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:76
// [-2] void setSelectionModel(QItemSelectionModel *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QTreeView*)this_)->setSelectionModel(selectionModel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:78
// [8] QHeaderView * header()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTreeView6headerEv(void *this_) {
  return (void*)((QTreeView*)this_)->header();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:79
// [-2] void setHeader(QHeaderView *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView9setHeaderEP11QHeaderView(void *this_, QHeaderView * header) {
  ((QTreeView*)this_)->setHeader(header);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:81
// [4] int autoExpandDelay()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTreeView15autoExpandDelayEv(void *this_) {
  return (int)((QTreeView*)this_)->autoExpandDelay();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:82
// [-2] void setAutoExpandDelay(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView18setAutoExpandDelayEi(void *this_, int delay) {
  ((QTreeView*)this_)->setAutoExpandDelay(delay);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:84
// [4] int indentation()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTreeView11indentationEv(void *this_) {
  return (int)((QTreeView*)this_)->indentation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:85
// [-2] void setIndentation(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView14setIndentationEi(void *this_, int i) {
  ((QTreeView*)this_)->setIndentation(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:86
// [-2] void resetIndentation()
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView16resetIndentationEv(void *this_) {
  ((QTreeView*)this_)->resetIndentation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:88
// [1] bool rootIsDecorated()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView15rootIsDecoratedEv(void *this_) {
  return (bool)((QTreeView*)this_)->rootIsDecorated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:89
// [-2] void setRootIsDecorated(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView18setRootIsDecoratedEb(void *this_, bool show) {
  ((QTreeView*)this_)->setRootIsDecorated(show);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:91
// [1] bool uniformRowHeights()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView17uniformRowHeightsEv(void *this_) {
  return (bool)((QTreeView*)this_)->uniformRowHeights();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:92
// [-2] void setUniformRowHeights(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView20setUniformRowHeightsEb(void *this_, bool uniform) {
  ((QTreeView*)this_)->setUniformRowHeights(uniform);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:94
// [1] bool itemsExpandable()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView15itemsExpandableEv(void *this_) {
  return (bool)((QTreeView*)this_)->itemsExpandable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:95
// [-2] void setItemsExpandable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView18setItemsExpandableEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setItemsExpandable(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:97
// [1] bool expandsOnDoubleClick()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView20expandsOnDoubleClickEv(void *this_) {
  return (bool)((QTreeView*)this_)->expandsOnDoubleClick();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:98
// [-2] void setExpandsOnDoubleClick(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView23setExpandsOnDoubleClickEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setExpandsOnDoubleClick(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:100
// [4] int columnViewportPosition(int)
extern "C" Q_DECL_EXPORT
int C_ZNK9QTreeView22columnViewportPositionEi(void *this_, int column) {
  return (int)((QTreeView*)this_)->columnViewportPosition(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:101
// [4] int columnWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK9QTreeView11columnWidthEi(void *this_, int column) {
  return (int)((QTreeView*)this_)->columnWidth(column);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreeview.h:102
// [-2] void setColumnWidth(int, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView14setColumnWidthEii(void *this_, int column, int width) {
  ((QTreeView*)this_)->setColumnWidth(column, width);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:103
// [4] int columnAt(int)
extern "C" Q_DECL_EXPORT
int C_ZNK9QTreeView8columnAtEi(void *this_, int x) {
  return (int)((QTreeView*)this_)->columnAt(x);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:105
// [1] bool isColumnHidden(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView14isColumnHiddenEi(void *this_, int column) {
  return (bool)((QTreeView*)this_)->isColumnHidden(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:106
// [-2] void setColumnHidden(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView15setColumnHiddenEib(void *this_, int column, bool hide) {
  ((QTreeView*)this_)->setColumnHidden(column, hide);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:108
// [1] bool isHeaderHidden()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView14isHeaderHiddenEv(void *this_) {
  return (bool)((QTreeView*)this_)->isHeaderHidden();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:109
// [-2] void setHeaderHidden(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView15setHeaderHiddenEb(void *this_, bool hide) {
  ((QTreeView*)this_)->setHeaderHidden(hide);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:111
// [1] bool isRowHidden(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView11isRowHiddenEiRK11QModelIndex(void *this_, int row, QModelIndex* parent) {
  return (bool)((QTreeView*)this_)->isRowHidden(row, *parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:112
// [-2] void setRowHidden(int, const QModelIndex &, bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView12setRowHiddenEiRK11QModelIndexb(void *this_, int row, QModelIndex* parent, bool hide) {
  ((QTreeView*)this_)->setRowHidden(row, *parent, hide);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtreeview.h:114
// [1] bool isFirstColumnSpanned(int, const QModelIndex &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView20isFirstColumnSpannedEiRK11QModelIndex(void *this_, int row, QModelIndex* parent) {
  return (bool)((QTreeView*)this_)->isFirstColumnSpanned(row, *parent);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtreeview.h:115
// [-2] void setFirstColumnSpanned(int, const QModelIndex &, bool)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView21setFirstColumnSpannedEiRK11QModelIndexb(void *this_, int row, QModelIndex* parent, bool span) {
  ((QTreeView*)this_)->setFirstColumnSpanned(row, *parent, span);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:117
// [1] bool isExpanded(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView10isExpandedERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QTreeView*)this_)->isExpanded(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:118
// [-2] void setExpanded(const QModelIndex &, bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView11setExpandedERK11QModelIndexb(void *this_, QModelIndex* index, bool expand) {
  ((QTreeView*)this_)->setExpanded(*index, expand);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:120
// [-2] void setSortingEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView17setSortingEnabledEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setSortingEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:121
// [1] bool isSortingEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView16isSortingEnabledEv(void *this_) {
  return (bool)((QTreeView*)this_)->isSortingEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:123
// [-2] void setAnimated(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView11setAnimatedEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setAnimated(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:124
// [1] bool isAnimated()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView10isAnimatedEv(void *this_) {
  return (bool)((QTreeView*)this_)->isAnimated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:126
// [-2] void setAllColumnsShowFocus(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView22setAllColumnsShowFocusEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setAllColumnsShowFocus(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:127
// [1] bool allColumnsShowFocus()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView19allColumnsShowFocusEv(void *this_) {
  return (bool)((QTreeView*)this_)->allColumnsShowFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:129
// [-2] void setWordWrap(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView11setWordWrapEb(void *this_, bool on) {
  ((QTreeView*)this_)->setWordWrap(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:130
// [1] bool wordWrap()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTreeView8wordWrapEv(void *this_) {
  return (bool)((QTreeView*)this_)->wordWrap();
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qtreeview.h:132
// [-2] void setTreePosition(int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView15setTreePositionEi(void *this_, int logicalIndex) {
  ((QTreeView*)this_)->setTreePosition(logicalIndex);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qtreeview.h:133
// [4] int treePosition()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
int C_ZNK9QTreeView12treePositionEv(void *this_) {
  return (int)((QTreeView*)this_)->treePosition();
}
#endif // QT_VERSION >= 0x050200

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:135
// [-2] void keyboardSearch(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView14keyboardSearchERK7QString(void *this_, QString* search) {
  ((QTreeView*)this_)->keyboardSearch(*search);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:137
// [16] QRect visualRect(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTreeView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QTreeView*)this_)->visualRect(*index);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:138
// [-2] void scrollTo(const QModelIndex &, QAbstractItemView::ScrollHint)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QTreeView*)this_)->scrollTo(*index, hint);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:139
// [24] QModelIndex indexAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTreeView7indexAtERK6QPoint(void *this_, QPoint* p) {
  auto rv = ((QTreeView*)this_)->indexAt(*p);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:140
// [24] QModelIndex indexAbove(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTreeView10indexAboveERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QTreeView*)this_)->indexAbove(*index);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:141
// [24] QModelIndex indexBelow(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTreeView10indexBelowERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QTreeView*)this_)->indexBelow(*index);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:143
// [-2] void doItemsLayout()
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView13doItemsLayoutEv(void *this_) {
  ((QTreeView*)this_)->doItemsLayout();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:144
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView5resetEv(void *this_) {
  ((QTreeView*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreeview.h:146
// [-2] void sortByColumn(int, Qt::SortOrder)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView12sortByColumnEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTreeView*)this_)->sortByColumn(column, order);
}
#endif // QT_VERSION >= 0x040200

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:148
// [-2] void dataChanged(const QModelIndex &, const QModelIndex &, const QVector<int> &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView11dataChangedERK11QModelIndexS2_RK7QVectorIiE(void *this_, QModelIndex* topLeft, QModelIndex* bottomRight, QVector<int>* roles) {
  ((QTreeView*)this_)->dataChanged(*topLeft, *bottomRight, *roles);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:149
// [-2] void selectAll()
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView9selectAllEv(void *this_) {
  ((QTreeView*)this_)->selectAll();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:152
// [-2] void expanded(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView8expandedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QTreeView*)this_)->expanded(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:153
// [-2] void collapsed(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView9collapsedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QTreeView*)this_)->collapsed(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:156
// [-2] void hideColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView10hideColumnEi(void *this_, int column) {
  ((QTreeView*)this_)->hideColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:157
// [-2] void showColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView10showColumnEi(void *this_, int column) {
  ((QTreeView*)this_)->showColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:158
// [-2] void expand(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView6expandERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QTreeView*)this_)->expand(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:159
// [-2] void collapse(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView8collapseERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QTreeView*)this_)->collapse(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:160
// [-2] void resizeColumnToContents(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView22resizeColumnToContentsEi(void *this_, int column) {
  ((QTreeView*)this_)->resizeColumnToContents(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:161
// [-2] void sortByColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView12sortByColumnEi(void *this_, int column) {
  ((QTreeView*)this_)->sortByColumn(column);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreeview.h:162
// [-2] void expandAll()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView9expandAllEv(void *this_) {
  ((QTreeView*)this_)->expandAll();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreeview.h:163
// [-2] void collapseAll()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView11collapseAllEv(void *this_) {
  ((QTreeView*)this_)->collapseAll();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtreeview.h:164
// [-2] void expandToDepth(int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN9QTreeView13expandToDepthEi(void *this_, int depth) {
  ((QTreeView*)this_)->expandToDepth(depth);
}
#endif // QT_VERSION >= 0x040300

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
