
// Generated from fugue_sql.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  fugue_sqlLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, FILL = 17, TAKE = 18, HASH = 19, RAND = 20, 
    EVEN = 21, PRESORT = 22, PERSIST = 23, BROADCAST = 24, PARAMS = 25, 
    PROCESS = 26, OUTPUT = 27, OUTTRANSFORM = 28, ROWCOUNT = 29, CONCURRENCY = 30, 
    PREPARTITION = 31, ZIP = 32, PRINT = 33, TITLE = 34, SAVE = 35, APPEND = 36, 
    PARQUET = 37, CSV = 38, JSON = 39, SINGLE = 40, CHECKPOINT = 41, WEAK = 42, 
    STRONG = 43, DETERMINISTIC = 44, YIELD = 45, CONNECT = 46, SAMPLE = 47, 
    SEED = 48, SUB = 49, CALLBACK = 50, DATAFRAME = 51, FILE = 52, ADD = 53, 
    AFTER = 54, ALL = 55, ALTER = 56, ANALYZE = 57, AND = 58, ANTI = 59, 
    ANY = 60, ARCHIVE = 61, ARRAY = 62, AS = 63, ASC = 64, AT = 65, AUTHORIZATION = 66, 
    BETWEEN = 67, BOTH = 68, BUCKET = 69, BUCKETS = 70, BY = 71, CACHE = 72, 
    CASCADE = 73, CASE = 74, CAST = 75, CHANGE = 76, CHECK = 77, CLEAR = 78, 
    CLUSTER = 79, CLUSTERED = 80, CODEGEN = 81, COLLATE = 82, COLLECTION = 83, 
    COLUMN = 84, COLUMNS = 85, COMMENT = 86, COMMIT = 87, COMPACT = 88, 
    COMPACTIONS = 89, COMPUTE = 90, CONCATENATE = 91, CONSTRAINT = 92, COST = 93, 
    CREATE = 94, CROSS = 95, CUBE = 96, CURRENT = 97, CURRENT_DATE = 98, 
    CURRENT_TIME = 99, CURRENT_TIMESTAMP = 100, CURRENT_USER = 101, DATA = 102, 
    DATABASE = 103, DATABASES = 104, DAY = 105, DBPROPERTIES = 106, DEFINED = 107, 
    DELETE = 108, DELIMITED = 109, DESC = 110, DESCRIBE = 111, DFS = 112, 
    DIRECTORIES = 113, DIRECTORY = 114, DISTINCT = 115, DISTRIBUTE = 116, 
    DROP = 117, ELSE = 118, END = 119, ESCAPE = 120, ESCAPED = 121, EXCEPT = 122, 
    EXCHANGE = 123, EXISTS = 124, EXPLAIN = 125, EXPORT = 126, EXTENDED = 127, 
    EXTERNAL = 128, EXTRACT = 129, FALSE = 130, FETCH = 131, FIELDS = 132, 
    FILTER = 133, FILEFORMAT = 134, FIRST = 135, FOLLOWING = 136, FOR = 137, 
    FOREIGN = 138, FORMAT = 139, FORMATTED = 140, FROM = 141, FULL = 142, 
    FUNCTION = 143, FUNCTIONS = 144, GLOBAL = 145, GRANT = 146, GROUP = 147, 
    GROUPING = 148, HAVING = 149, HOUR = 150, IF = 151, IGNORE = 152, IMPORT = 153, 
    IN = 154, INDEX = 155, INDEXES = 156, INNER = 157, INPATH = 158, INPUTFORMAT = 159, 
    INSERT = 160, INTERSECT = 161, INTERVAL = 162, INTO = 163, IS = 164, 
    ITEMS = 165, JOIN = 166, KEYS = 167, LAST = 168, LATERAL = 169, LAZY = 170, 
    LEADING = 171, LEFT = 172, LIKE = 173, LIMIT = 174, LINES = 175, LIST = 176, 
    LOAD = 177, LOCAL = 178, LOCATION = 179, LOCK = 180, LOCKS = 181, LOGICAL = 182, 
    MACRO = 183, MAP = 184, MATCHED = 185, MERGE = 186, MINUTE = 187, MONTH = 188, 
    MSCK = 189, NAMESPACE = 190, NAMESPACES = 191, NATURAL = 192, NO = 193, 
    NOT = 194, THENULL = 195, THENULLS = 196, OF = 197, ON = 198, ONLY = 199, 
    OPTION = 200, OPTIONS = 201, OR = 202, ORDER = 203, OUT = 204, OUTER = 205, 
    OUTPUTFORMAT = 206, OVER = 207, OVERLAPS = 208, OVERLAY = 209, OVERWRITE = 210, 
    PARTITION = 211, PARTITIONED = 212, PARTITIONS = 213, PERCENTLIT = 214, 
    PIVOT = 215, PLACING = 216, POSITION = 217, PRECEDING = 218, PRIMARY = 219, 
    PRINCIPALS = 220, PROPERTIES = 221, PURGE = 222, QUERY = 223, RANGE = 224, 
    RECORDREADER = 225, RECORDWRITER = 226, RECOVER = 227, REDUCE = 228, 
    REFERENCES = 229, REFRESH = 230, RENAME = 231, REPAIR = 232, REPLACE = 233, 
    RESET = 234, RESTRICT = 235, REVOKE = 236, RIGHT = 237, RLIKE = 238, 
    ROLE = 239, ROLES = 240, ROLLBACK = 241, ROLLUP = 242, ROW = 243, ROWS = 244, 
    SCHEMA = 245, SECOND = 246, SELECT = 247, SEMI = 248, SEPARATED = 249, 
    SERDE = 250, SERDEPROPERTIES = 251, SESSION_USER = 252, SET = 253, SETMINUS = 254, 
    SETS = 255, SHOW = 256, SKEWED = 257, SOME = 258, SORT = 259, SORTED = 260, 
    START = 261, STATISTICS = 262, STORED = 263, STRATIFY = 264, STRUCT = 265, 
    SUBSTR = 266, SUBSTRING = 267, TABLE = 268, TABLES = 269, TABLESAMPLE = 270, 
    TBLPROPERTIES = 271, TEMPORARY = 272, TERMINATED = 273, THEN = 274, 
    TO = 275, TOUCH = 276, TRAILING = 277, TRANSACTION = 278, TRANSACTIONS = 279, 
    TRANSFORM = 280, TRIM = 281, TRUE = 282, TRUNCATE = 283, TYPE = 284, 
    UNARCHIVE = 285, UNBOUNDED = 286, UNCACHE = 287, UNION = 288, UNIQUE = 289, 
    UNKNOWN = 290, UNLOCK = 291, UNSET = 292, UPDATE = 293, USE = 294, USER = 295, 
    USING = 296, VALUES = 297, VIEW = 298, VIEWS = 299, WHEN = 300, WHERE = 301, 
    WINDOW = 302, WITH = 303, YEAR = 304, EQUAL = 305, DOUBLEEQUAL = 306, 
    NSEQ = 307, NEQ = 308, NEQJ = 309, LT = 310, LTE = 311, GT = 312, GTE = 313, 
    PLUS = 314, MINUS = 315, ASTERISK = 316, SLASH = 317, PERCENT = 318, 
    DIV = 319, TILDE = 320, AMPERSAND = 321, PIPE = 322, CONCAT_PIPE = 323, 
    HAT = 324, STRING = 325, BIGINT_LITERAL = 326, SMALLINT_LITERAL = 327, 
    TINYINT_LITERAL = 328, INTEGER_VALUE = 329, EXPONENT_VALUE = 330, DECIMAL_VALUE = 331, 
    DOUBLE_LITERAL = 332, BIGDECIMAL_LITERAL = 333, IDENTIFIER = 334, BACKQUOTED_IDENTIFIER = 335, 
    SIMPLE_COMMENT = 336, BRACKETED_COMMENT = 337, WS = 338, UNRECOGNIZED = 339
  };

  explicit fugue_sqlLexer(antlr4::CharStream *input);
  ~fugue_sqlLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

