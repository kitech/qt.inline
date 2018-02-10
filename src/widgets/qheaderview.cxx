//  header block begin
// /usr/include/qt/QtWidgets/qheaderview.h
#include <qheaderview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QHeaderView is pure virtual: false
// QHeaderView has virtual projected: true
//  header block end

//  main block begin

class MyQHeaderView : public QHeaderView {
public:
  virtual ~MyQHeaderView() {}
// void QHeaderView(Qt::Orientation, class QWidget *)
MyQHeaderView(Qt::Orientation orientation, QWidget * parent) : QHeaderView(orientation, parent) {}
// void updateSection(int)
  virtual void updateSection(int logicalIndex) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateSection", &handled, 1, (uint64_t)logicalIndex, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::updateSection(logicalIndex);
  }
  }

// void resizeSections()
  virtual void resizeSections() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeSections", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::resizeSections();
  }
  }

// void sectionsInserted(const class QModelIndex &, int, int)
  virtual void sectionsInserted(const QModelIndex & parent, int logicalFirst, int logicalLast) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sectionsInserted", &handled, 3, (uint64_t)&parent, (uint64_t)logicalFirst, (uint64_t)logicalLast, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::sectionsInserted(parent, logicalFirst, logicalLast);
  }
  }

// void sectionsAboutToBeRemoved(const class QModelIndex &, int, int)
  virtual void sectionsAboutToBeRemoved(const QModelIndex & parent, int logicalFirst, int logicalLast) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sectionsAboutToBeRemoved", &handled, 3, (uint64_t)&parent, (uint64_t)logicalFirst, (uint64_t)logicalLast, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::sectionsAboutToBeRemoved(parent, logicalFirst, logicalLast);
  }
  }

// void initialize()
  virtual void initialize() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initialize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::initialize();
  }
  }

// void initializeSections()
  virtual void initializeSections() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initializeSections", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::initializeSections();
  }
  }

// void initializeSections(int, int)
  virtual void initializeSections(int start, int end) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initializeSections", &handled, 2, (uint64_t)start, (uint64_t)end, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::initializeSections(start, end);
  }
  }

// void currentChanged(const class QModelIndex &, const class QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & old) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&old, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::currentChanged(current, old);
  }
  }

// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QHeaderView::event(e);
  }
  }

// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::paintEvent(e);
  }
  }

// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::mousePressEvent(e);
  }
  }

// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::mouseMoveEvent(e);
  }
  }

// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::mouseReleaseEvent(e);
  }
  }

// void mouseDoubleClickEvent(class QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::mouseDoubleClickEvent(e);
  }
  }

// bool viewportEvent(class QEvent *)
  virtual bool viewportEvent(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"viewportEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QHeaderView::viewportEvent(e);
  }
  }

// void paintSection(class QPainter *, const class QRect &, int)
  virtual void paintSection(QPainter * painter, const QRect & rect, int logicalIndex) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintSection", &handled, 3, (uint64_t)painter, (uint64_t)&rect, (uint64_t)logicalIndex, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::paintSection(painter, rect, logicalIndex);
  }
  }

// QSize sectionSizeFromContents(int)
  virtual QSize sectionSizeFromContents(int logicalIndex) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sectionSizeFromContents", &handled, 1, (uint64_t)logicalIndex, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // RecordRecordQSize
    } else {
    return QHeaderView::sectionSizeFromContents(logicalIndex);
  }
  }

// int horizontalOffset()
  virtual int horizontalOffset() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"horizontalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QHeaderView::horizontalOffset();
  }
  }

// int verticalOffset()
  virtual int verticalOffset() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"verticalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QHeaderView::verticalOffset();
  }
  }

// void updateGeometries()
  virtual void updateGeometries() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::updateGeometries();
  }
  }

// void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::scrollContentsBy(dx, dy);
  }
  }

// void rowsInserted(const class QModelIndex &, int, int)
  virtual void rowsInserted(const QModelIndex & parent, int start, int end) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rowsInserted", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::rowsInserted(parent, start, end);
  }
  }

// QRect visualRect(const class QModelIndex &)
  virtual QRect visualRect(const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"visualRect", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRect*)(irv);
      // RecordRecordQRect
    } else {
    return QHeaderView::visualRect(index);
  }
  }

// void scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
  virtual void scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"scrollTo", &handled, 2, (uint64_t)&index, (uint64_t)hint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::scrollTo(index, hint);
  }
  }

// QModelIndex indexAt(const class QPoint &)
  virtual QModelIndex indexAt(const QPoint & p) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"indexAt", &handled, 1, (uint64_t)&p, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndex*)(irv);
      // RecordRecordQModelIndex
    } else {
    return QHeaderView::indexAt(p);
  }
  }

// bool isIndexHidden(const class QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"isIndexHidden", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QHeaderView::isIndexHidden(index);
  }
  }

// QModelIndex moveCursor(enum QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction arg0, QFlags<Qt::KeyboardModifier> arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"moveCursor", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndex*)(irv);
      // RecordRecordQModelIndex
    } else {
    return QHeaderView::moveCursor(arg0, arg1);
  }
  }

// void setSelection(const class QRect &, class QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> flags) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setSelection", &handled, 2, (uint64_t)&rect, (uint64_t)flags, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::setSelection(rect, flags);
  }
  }

// QRegion visualRegionForSelection(const class QItemSelection &)
  virtual QRegion visualRegionForSelection(const QItemSelection & selection) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"visualRegionForSelection", &handled, 1, (uint64_t)&selection, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRegion*)(irv);
      // RecordRecordQRegion
    } else {
    return QHeaderView::visualRegionForSelection(selection);
  }
  }

// void initStyleOption(class QStyleOptionHeader *)
  virtual void initStyleOption(QStyleOptionHeader * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHeaderView::initStyleOption(option);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QHeaderView10metaObjectEv(void *this_) {
  return (void*)((QHeaderView*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:77
// [-2] void QHeaderView(Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN11QHeaderViewC2EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent) {
  auto _nilp = (MyQHeaderView*)(0);
  return  new MyQHeaderView(orientation, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:78
// [-2] void ~QHeaderView()
extern "C"
void C_ZN11QHeaderViewD2Ev(void *this_) {
  delete (QHeaderView*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:80
// [-2] void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN11QHeaderView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QHeaderView*)this_)->setModel(model);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:82
// [4] Qt::Orientation orientation()
extern "C"
Qt::Orientation C_ZNK11QHeaderView11orientationEv(void *this_) {
  return (Qt::Orientation)((QHeaderView*)this_)->orientation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:83
// [4] int offset()
extern "C"
int C_ZNK11QHeaderView6offsetEv(void *this_) {
  return (int)((QHeaderView*)this_)->offset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:84
// [4] int length()
extern "C"
int C_ZNK11QHeaderView6lengthEv(void *this_) {
  return (int)((QHeaderView*)this_)->length();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:85
// [8] QSize sizeHint()
extern "C"
void* C_ZNK11QHeaderView8sizeHintEv(void *this_) {
  auto rv = ((QHeaderView*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:86
// [-2] void setVisible(_Bool)
extern "C"
void C_ZN11QHeaderView10setVisibleEb(void *this_, bool v) {
  ((QHeaderView*)this_)->setVisible(v);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:87
// [4] int sectionSizeHint(int)
extern "C"
int C_ZNK11QHeaderView15sectionSizeHintEi(void *this_, int logicalIndex) {
  return (int)((QHeaderView*)this_)->sectionSizeHint(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:89
// [4] int visualIndexAt(int)
extern "C"
int C_ZNK11QHeaderView13visualIndexAtEi(void *this_, int position) {
  return (int)((QHeaderView*)this_)->visualIndexAt(position);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:90
// [4] int logicalIndexAt(int)
extern "C"
int C_ZNK11QHeaderView14logicalIndexAtEi(void *this_, int position) {
  return (int)((QHeaderView*)this_)->logicalIndexAt(position);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:92
// [4] int logicalIndexAt(int, int)
extern "C"
int C_ZNK11QHeaderView14logicalIndexAtEii(void *this_, int x, int y) {
  return (int)((QHeaderView*)this_)->logicalIndexAt(x, y);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:93
// [4] int logicalIndexAt(const class QPoint &)
extern "C"
int C_ZNK11QHeaderView14logicalIndexAtERK6QPoint(void *this_, QPoint* pos) {
  return (int)((QHeaderView*)this_)->logicalIndexAt(*pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:95
// [4] int sectionSize(int)
extern "C"
int C_ZNK11QHeaderView11sectionSizeEi(void *this_, int logicalIndex) {
  return (int)((QHeaderView*)this_)->sectionSize(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:96
// [4] int sectionPosition(int)
extern "C"
int C_ZNK11QHeaderView15sectionPositionEi(void *this_, int logicalIndex) {
  return (int)((QHeaderView*)this_)->sectionPosition(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:97
// [4] int sectionViewportPosition(int)
extern "C"
int C_ZNK11QHeaderView23sectionViewportPositionEi(void *this_, int logicalIndex) {
  return (int)((QHeaderView*)this_)->sectionViewportPosition(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:99
// [-2] void moveSection(int, int)
extern "C"
void C_ZN11QHeaderView11moveSectionEii(void *this_, int from, int to) {
  ((QHeaderView*)this_)->moveSection(from, to);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:100
// [-2] void swapSections(int, int)
extern "C"
void C_ZN11QHeaderView12swapSectionsEii(void *this_, int first, int second) {
  ((QHeaderView*)this_)->swapSections(first, second);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:101
// [-2] void resizeSection(int, int)
extern "C"
void C_ZN11QHeaderView13resizeSectionEii(void *this_, int logicalIndex, int size) {
  ((QHeaderView*)this_)->resizeSection(logicalIndex, size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:102
// [-2] void resizeSections(class QHeaderView::ResizeMode)
extern "C"
void C_ZN11QHeaderView14resizeSectionsENS_10ResizeModeE(void *this_, QHeaderView::ResizeMode mode) {
  ((QHeaderView*)this_)->resizeSections(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:104
// [1] bool isSectionHidden(int)
extern "C"
bool C_ZNK11QHeaderView15isSectionHiddenEi(void *this_, int logicalIndex) {
  return (bool)((QHeaderView*)this_)->isSectionHidden(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:105
// [-2] void setSectionHidden(int, _Bool)
extern "C"
void C_ZN11QHeaderView16setSectionHiddenEib(void *this_, int logicalIndex, bool hide) {
  ((QHeaderView*)this_)->setSectionHidden(logicalIndex, hide);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:106
// [4] int hiddenSectionCount()
extern "C"
int C_ZNK11QHeaderView18hiddenSectionCountEv(void *this_) {
  return (int)((QHeaderView*)this_)->hiddenSectionCount();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:108
// [-2] void hideSection(int)
extern "C"
void C_ZN11QHeaderView11hideSectionEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->hideSection(logicalIndex);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:109
// [-2] void showSection(int)
extern "C"
void C_ZN11QHeaderView11showSectionEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->showSection(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:111
// [4] int count()
extern "C"
int C_ZNK11QHeaderView5countEv(void *this_) {
  return (int)((QHeaderView*)this_)->count();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:112
// [4] int visualIndex(int)
extern "C"
int C_ZNK11QHeaderView11visualIndexEi(void *this_, int logicalIndex) {
  return (int)((QHeaderView*)this_)->visualIndex(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:113
// [4] int logicalIndex(int)
extern "C"
int C_ZNK11QHeaderView12logicalIndexEi(void *this_, int visualIndex) {
  return (int)((QHeaderView*)this_)->logicalIndex(visualIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:115
// [-2] void setSectionsMovable(_Bool)
extern "C"
void C_ZN11QHeaderView18setSectionsMovableEb(void *this_, bool movable) {
  ((QHeaderView*)this_)->setSectionsMovable(movable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:116
// [1] bool sectionsMovable()
extern "C"
bool C_ZNK11QHeaderView15sectionsMovableEv(void *this_) {
  return (bool)((QHeaderView*)this_)->sectionsMovable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:122
// [-2] void setSectionsClickable(_Bool)
extern "C"
void C_ZN11QHeaderView20setSectionsClickableEb(void *this_, bool clickable) {
  ((QHeaderView*)this_)->setSectionsClickable(clickable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:123
// [1] bool sectionsClickable()
extern "C"
bool C_ZNK11QHeaderView17sectionsClickableEv(void *this_) {
  return (bool)((QHeaderView*)this_)->sectionsClickable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:129
// [-2] void setHighlightSections(_Bool)
extern "C"
void C_ZN11QHeaderView20setHighlightSectionsEb(void *this_, bool highlight) {
  ((QHeaderView*)this_)->setHighlightSections(highlight);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:130
// [1] bool highlightSections()
extern "C"
bool C_ZNK11QHeaderView17highlightSectionsEv(void *this_) {
  return (bool)((QHeaderView*)this_)->highlightSections();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:132
// [4] QHeaderView::ResizeMode sectionResizeMode(int)
extern "C"
QHeaderView::ResizeMode C_ZNK11QHeaderView17sectionResizeModeEi(void *this_, int logicalIndex) {
  return (QHeaderView::ResizeMode)((QHeaderView*)this_)->sectionResizeMode(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:133
// [-2] void setSectionResizeMode(enum QHeaderView::ResizeMode)
extern "C"
void C_ZN11QHeaderView20setSectionResizeModeENS_10ResizeModeE(void *this_, QHeaderView::ResizeMode mode) {
  ((QHeaderView*)this_)->setSectionResizeMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:134
// [-2] void setSectionResizeMode(int, enum QHeaderView::ResizeMode)
extern "C"
void C_ZN11QHeaderView20setSectionResizeModeEiNS_10ResizeModeE(void *this_, int logicalIndex, QHeaderView::ResizeMode mode) {
  ((QHeaderView*)this_)->setSectionResizeMode(logicalIndex, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:136
// [-2] void setResizeContentsPrecision(int)
extern "C"
void C_ZN11QHeaderView26setResizeContentsPrecisionEi(void *this_, int precision) {
  ((QHeaderView*)this_)->setResizeContentsPrecision(precision);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:137
// [4] int resizeContentsPrecision()
extern "C"
int C_ZNK11QHeaderView23resizeContentsPrecisionEv(void *this_) {
  return (int)((QHeaderView*)this_)->resizeContentsPrecision();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:148
// [4] int stretchSectionCount()
extern "C"
int C_ZNK11QHeaderView19stretchSectionCountEv(void *this_) {
  return (int)((QHeaderView*)this_)->stretchSectionCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:150
// [-2] void setSortIndicatorShown(_Bool)
extern "C"
void C_ZN11QHeaderView21setSortIndicatorShownEb(void *this_, bool show) {
  ((QHeaderView*)this_)->setSortIndicatorShown(show);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:151
// [1] bool isSortIndicatorShown()
extern "C"
bool C_ZNK11QHeaderView20isSortIndicatorShownEv(void *this_) {
  return (bool)((QHeaderView*)this_)->isSortIndicatorShown();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:153
// [-2] void setSortIndicator(int, Qt::SortOrder)
extern "C"
void C_ZN11QHeaderView16setSortIndicatorEiN2Qt9SortOrderE(void *this_, int logicalIndex, Qt::SortOrder order) {
  ((QHeaderView*)this_)->setSortIndicator(logicalIndex, order);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:154
// [4] int sortIndicatorSection()
extern "C"
int C_ZNK11QHeaderView20sortIndicatorSectionEv(void *this_) {
  return (int)((QHeaderView*)this_)->sortIndicatorSection();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:155
// [4] Qt::SortOrder sortIndicatorOrder()
extern "C"
Qt::SortOrder C_ZNK11QHeaderView18sortIndicatorOrderEv(void *this_) {
  return (Qt::SortOrder)((QHeaderView*)this_)->sortIndicatorOrder();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:157
// [1] bool stretchLastSection()
extern "C"
bool C_ZNK11QHeaderView18stretchLastSectionEv(void *this_) {
  return (bool)((QHeaderView*)this_)->stretchLastSection();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:158
// [-2] void setStretchLastSection(_Bool)
extern "C"
void C_ZN11QHeaderView21setStretchLastSectionEb(void *this_, bool stretch) {
  ((QHeaderView*)this_)->setStretchLastSection(stretch);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:160
// [1] bool cascadingSectionResizes()
extern "C"
bool C_ZNK11QHeaderView23cascadingSectionResizesEv(void *this_) {
  return (bool)((QHeaderView*)this_)->cascadingSectionResizes();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:161
// [-2] void setCascadingSectionResizes(_Bool)
extern "C"
void C_ZN11QHeaderView26setCascadingSectionResizesEb(void *this_, bool enable) {
  ((QHeaderView*)this_)->setCascadingSectionResizes(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:163
// [4] int defaultSectionSize()
extern "C"
int C_ZNK11QHeaderView18defaultSectionSizeEv(void *this_) {
  return (int)((QHeaderView*)this_)->defaultSectionSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:164
// [-2] void setDefaultSectionSize(int)
extern "C"
void C_ZN11QHeaderView21setDefaultSectionSizeEi(void *this_, int size) {
  ((QHeaderView*)this_)->setDefaultSectionSize(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:165
// [-2] void resetDefaultSectionSize()
extern "C"
void C_ZN11QHeaderView23resetDefaultSectionSizeEv(void *this_) {
  ((QHeaderView*)this_)->resetDefaultSectionSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:167
// [4] int minimumSectionSize()
extern "C"
int C_ZNK11QHeaderView18minimumSectionSizeEv(void *this_) {
  return (int)((QHeaderView*)this_)->minimumSectionSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:168
// [-2] void setMinimumSectionSize(int)
extern "C"
void C_ZN11QHeaderView21setMinimumSectionSizeEi(void *this_, int size) {
  ((QHeaderView*)this_)->setMinimumSectionSize(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:169
// [4] int maximumSectionSize()
extern "C"
int C_ZNK11QHeaderView18maximumSectionSizeEv(void *this_) {
  return (int)((QHeaderView*)this_)->maximumSectionSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:170
// [-2] void setMaximumSectionSize(int)
extern "C"
void C_ZN11QHeaderView21setMaximumSectionSizeEi(void *this_, int size) {
  ((QHeaderView*)this_)->setMaximumSectionSize(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:172
// [4] Qt::Alignment defaultAlignment()
extern "C"
Qt::Alignment C_ZNK11QHeaderView16defaultAlignmentEv(void *this_) {
  return (Qt::Alignment)((QHeaderView*)this_)->defaultAlignment();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:173
// [-2] void setDefaultAlignment(Qt::Alignment)
extern "C"
void C_ZN11QHeaderView19setDefaultAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QHeaderView*)this_)->setDefaultAlignment(alignment);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:175
// [-2] void doItemsLayout()
extern "C"
void C_ZN11QHeaderView13doItemsLayoutEv(void *this_) {
  ((QHeaderView*)this_)->doItemsLayout();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:176
// [1] bool sectionsMoved()
extern "C"
bool C_ZNK11QHeaderView13sectionsMovedEv(void *this_) {
  return (bool)((QHeaderView*)this_)->sectionsMoved();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:177
// [1] bool sectionsHidden()
extern "C"
bool C_ZNK11QHeaderView14sectionsHiddenEv(void *this_) {
  return (bool)((QHeaderView*)this_)->sectionsHidden();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:180
// [8] QByteArray saveState()
extern "C"
void* C_ZNK11QHeaderView9saveStateEv(void *this_) {
  auto rv = ((QHeaderView*)this_)->saveState();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:181
// [1] bool restoreState(const class QByteArray &)
extern "C"
bool C_ZN11QHeaderView12restoreStateERK10QByteArray(void *this_, QByteArray* state) {
  return (bool)((QHeaderView*)this_)->restoreState(*state);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:184
// [-2] void reset()
extern "C"
void C_ZN11QHeaderView5resetEv(void *this_) {
  ((QHeaderView*)this_)->reset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:187
// [-2] void setOffset(int)
extern "C"
void C_ZN11QHeaderView9setOffsetEi(void *this_, int offset) {
  ((QHeaderView*)this_)->setOffset(offset);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:188
// [-2] void setOffsetToSectionPosition(int)
extern "C"
void C_ZN11QHeaderView26setOffsetToSectionPositionEi(void *this_, int visualIndex) {
  ((QHeaderView*)this_)->setOffsetToSectionPosition(visualIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:189
// [-2] void setOffsetToLastSection()
extern "C"
void C_ZN11QHeaderView22setOffsetToLastSectionEv(void *this_) {
  ((QHeaderView*)this_)->setOffsetToLastSection();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:190
// [-2] void headerDataChanged(Qt::Orientation, int, int)
extern "C"
void C_ZN11QHeaderView17headerDataChangedEN2Qt11OrientationEii(void *this_, Qt::Orientation orientation, int logicalFirst, int logicalLast) {
  ((QHeaderView*)this_)->headerDataChanged(orientation, logicalFirst, logicalLast);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:193
// [-2] void sectionMoved(int, int, int)
extern "C"
void C_ZN11QHeaderView12sectionMovedEiii(void *this_, int logicalIndex, int oldVisualIndex, int newVisualIndex) {
  ((QHeaderView*)this_)->sectionMoved(logicalIndex, oldVisualIndex, newVisualIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:194
// [-2] void sectionResized(int, int, int)
extern "C"
void C_ZN11QHeaderView14sectionResizedEiii(void *this_, int logicalIndex, int oldSize, int newSize) {
  ((QHeaderView*)this_)->sectionResized(logicalIndex, oldSize, newSize);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:195
// [-2] void sectionPressed(int)
extern "C"
void C_ZN11QHeaderView14sectionPressedEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionPressed(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:196
// [-2] void sectionClicked(int)
extern "C"
void C_ZN11QHeaderView14sectionClickedEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionClicked(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:197
// [-2] void sectionEntered(int)
extern "C"
void C_ZN11QHeaderView14sectionEnteredEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionEntered(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:198
// [-2] void sectionDoubleClicked(int)
extern "C"
void C_ZN11QHeaderView20sectionDoubleClickedEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionDoubleClicked(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:199
// [-2] void sectionCountChanged(int, int)
extern "C"
void C_ZN11QHeaderView19sectionCountChangedEii(void *this_, int oldCount, int newCount) {
  ((QHeaderView*)this_)->sectionCountChanged(oldCount, newCount);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:200
// [-2] void sectionHandleDoubleClicked(int)
extern "C"
void C_ZN11QHeaderView26sectionHandleDoubleClickedEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionHandleDoubleClicked(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:201
// [-2] void geometriesChanged()
extern "C"
void C_ZN11QHeaderView17geometriesChangedEv(void *this_) {
  ((QHeaderView*)this_)->geometriesChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:202
// [-2] void sortIndicatorChanged(int, Qt::SortOrder)
extern "C"
void C_ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(void *this_, int logicalIndex, Qt::SortOrder order) {
  ((QHeaderView*)this_)->sortIndicatorChanged(logicalIndex, order);
}
//  main block end
