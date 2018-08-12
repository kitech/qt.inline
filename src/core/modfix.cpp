#include <QtCore>

extern "C" Q_DECL_EXPORT
const char *C_qVersion() { return qVersion(); }

