
// Generated from fugue_sql.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  fugue_sqlLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, FILL = 17, TAKE = 18, HASH = 19, RAND = 20, 
    EVEN = 21, COARSE = 22, PRESORT = 23, PERSIST = 24, BROADCAST = 25, 
    PARAMS = 26, PROCESS = 27, OUTPUT = 28, OUTTRANSFORM = 29, ROWCOUNT = 30, 
    CONCURRENCY = 31, PREPARTITION = 32, ZIP = 33, PRINT = 34, TITLE = 35, 
    SAVE = 36, APPEND = 37, PARQUET = 38, CSV = 39, JSON = 40, SINGLE = 41, 
    CHECKPOINT = 42, WEAK = 43, STRONG = 44, DETERMINISTIC = 45, YIELD = 46, 
    CONNECT = 47, SAMPLE = 48, SEED = 49, APPROX = 50, SYSTEM = 51, BERNOULLI = 52, 
    RESERVOIR = 53, SUB = 54, CALLBACK = 55, DATAFRAME = 56, FILE = 57, 
    ADD = 58, AFTER = 59, ALL = 60, ALTER = 61, ANALYZE = 62, AND = 63, 
    ANTI = 64, ANY = 65, ARCHIVE = 66, ARRAY = 67, AS = 68, ASC = 69, AT = 70, 
    AUTHORIZATION = 71, BETWEEN = 72, BOTH = 73, BUCKET = 74, BUCKETS = 75, 
    BY = 76, CACHE = 77, CASCADE = 78, CASE = 79, CAST = 80, CHANGE = 81, 
    CHECK = 82, CLEAR = 83, CLUSTER = 84, CLUSTERED = 85, CODEGEN = 86, 
    COLLATE = 87, COLLECTION = 88, COLUMN = 89, COLUMNS = 90, COMMENT = 91, 
    COMMIT = 92, COMPACT = 93, COMPACTIONS = 94, COMPUTE = 95, CONCATENATE = 96, 
    CONSTRAINT = 97, COST = 98, CREATE = 99, CROSS = 100, CUBE = 101, CURRENT = 102, 
    CURRENT_DATE = 103, CURRENT_TIME = 104, CURRENT_TIMESTAMP = 105, CURRENT_USER = 106, 
    DATA = 107, DATABASE = 108, DATABASES = 109, DAY = 110, DBPROPERTIES = 111, 
    DEFINED = 112, DELETE = 113, DELIMITED = 114, DESC = 115, DESCRIBE = 116, 
    DFS = 117, DIRECTORIES = 118, DIRECTORY = 119, DISTINCT = 120, DISTRIBUTE = 121, 
    DROP = 122, ELSE = 123, END = 124, ESCAPE = 125, ESCAPED = 126, EXCEPT = 127, 
    EXCHANGE = 128, EXISTS = 129, EXPLAIN = 130, EXPORT = 131, EXTENDED = 132, 
    EXTERNAL = 133, EXTRACT = 134, FALSE = 135, FETCH = 136, FIELDS = 137, 
    FILTER = 138, FILEFORMAT = 139, FIRST = 140, FOLLOWING = 141, FOR = 142, 
    FOREIGN = 143, FORMAT = 144, FORMATTED = 145, FROM = 146, FULL = 147, 
    FUNCTION = 148, FUNCTIONS = 149, GLOBAL = 150, GRANT = 151, GROUP = 152, 
    GROUPING = 153, HAVING = 154, HOUR = 155, IF = 156, IGNORE = 157, IMPORT = 158, 
    IN = 159, INDEX = 160, INDEXES = 161, INNER = 162, INPATH = 163, INPUTFORMAT = 164, 
    INSERT = 165, INTERSECT = 166, INTERVAL = 167, INTO = 168, IS = 169, 
    ITEMS = 170, JOIN = 171, KEYS = 172, LAST = 173, LATERAL = 174, LAZY = 175, 
    LEADING = 176, LEFT = 177, LIKE = 178, LIMIT = 179, LINES = 180, LIST = 181, 
    LOAD = 182, LOCAL = 183, LOCATION = 184, LOCK = 185, LOCKS = 186, LOGICAL = 187, 
    MACRO = 188, MAP = 189, MATCHED = 190, MERGE = 191, MINUTE = 192, MONTH = 193, 
    MSCK = 194, NAMESPACE = 195, NAMESPACES = 196, NATURAL = 197, NO = 198, 
    NOT = 199, THENULL = 200, THENULLS = 201, OF = 202, ON = 203, ONLY = 204, 
    OPTION = 205, OPTIONS = 206, OR = 207, ORDER = 208, OUT = 209, OUTER = 210, 
    OUTPUTFORMAT = 211, OVER = 212, OVERLAPS = 213, OVERLAY = 214, OVERWRITE = 215, 
    PARTITION = 216, PARTITIONED = 217, PARTITIONS = 218, PERCENTLIT = 219, 
    PIVOT = 220, PLACING = 221, POSITION = 222, PRECEDING = 223, PRIMARY = 224, 
    PRINCIPALS = 225, PROPERTIES = 226, PURGE = 227, QUERY = 228, RANGE = 229, 
    RECORDREADER = 230, RECORDWRITER = 231, RECOVER = 232, REDUCE = 233, 
    REFERENCES = 234, REFRESH = 235, RENAME = 236, REPAIR = 237, REPLACE = 238, 
    RESET = 239, RESTRICT = 240, REVOKE = 241, RIGHT = 242, RLIKE = 243, 
    ROLE = 244, ROLES = 245, ROLLBACK = 246, ROLLUP = 247, ROW = 248, ROWS = 249, 
    SCHEMA = 250, SECOND = 251, SELECT = 252, SEMI = 253, SEPARATED = 254, 
    SERDE = 255, SERDEPROPERTIES = 256, SESSION_USER = 257, SET = 258, SETMINUS = 259, 
    SETS = 260, SHOW = 261, SKEWED = 262, SOME = 263, SORT = 264, SORTED = 265, 
    START = 266, STATISTICS = 267, STORED = 268, STRATIFY = 269, STRUCT = 270, 
    SUBSTR = 271, SUBSTRING = 272, TABLE = 273, TABLES = 274, TABLESAMPLE = 275, 
    TBLPROPERTIES = 276, TEMPORARY = 277, TERMINATED = 278, THEN = 279, 
    TO = 280, TOUCH = 281, TRAILING = 282, TRANSACTION = 283, TRANSACTIONS = 284, 
    TRANSFORM = 285, TRIM = 286, TRUE = 287, TRUNCATE = 288, TYPE = 289, 
    UNARCHIVE = 290, UNBOUNDED = 291, UNCACHE = 292, UNION = 293, UNIQUE = 294, 
    UNKNOWN = 295, UNLOCK = 296, UNSET = 297, UPDATE = 298, USE = 299, USER = 300, 
    USING = 301, VALUES = 302, VIEW = 303, VIEWS = 304, WHEN = 305, WHERE = 306, 
    WINDOW = 307, WITH = 308, YEAR = 309, EQUAL = 310, DOUBLEEQUAL = 311, 
    NSEQ = 312, NEQ = 313, NEQJ = 314, LT = 315, LTE = 316, GT = 317, GTE = 318, 
    PLUS = 319, MINUS = 320, ASTERISK = 321, SLASH = 322, PERCENT = 323, 
    DIV = 324, TILDE = 325, AMPERSAND = 326, PIPE = 327, CONCAT_PIPE = 328, 
    HAT = 329, STRING = 330, BIGINT_LITERAL = 331, SMALLINT_LITERAL = 332, 
    TINYINT_LITERAL = 333, INTEGER_VALUE = 334, EXPONENT_VALUE = 335, DECIMAL_VALUE = 336, 
    DOUBLE_LITERAL = 337, BIGDECIMAL_LITERAL = 338, IDENTIFIER = 339, BACKQUOTED_IDENTIFIER = 340, 
    SIMPLE_COMMENT = 341, BRACKETED_COMMENT = 342, WS = 343, UNRECOGNIZED = 344
  };

  explicit fugue_sqlLexer(antlr4::CharStream *input);

  ~fugue_sqlLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

