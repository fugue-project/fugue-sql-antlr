
// Generated from fugue_sql.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  fugue_sqlParser : public antlr4::Parser {
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
    SEED = 48, APPROX = 49, SYSTEM = 50, BERNOULLI = 51, RESERVOIR = 52, 
    SUB = 53, CALLBACK = 54, DATAFRAME = 55, FILE = 56, ADD = 57, AFTER = 58, 
    ALL = 59, ALTER = 60, ANALYZE = 61, AND = 62, ANTI = 63, ANY = 64, ARCHIVE = 65, 
    ARRAY = 66, AS = 67, ASC = 68, AT = 69, AUTHORIZATION = 70, BETWEEN = 71, 
    BOTH = 72, BUCKET = 73, BUCKETS = 74, BY = 75, CACHE = 76, CASCADE = 77, 
    CASE = 78, CAST = 79, CHANGE = 80, CHECK = 81, CLEAR = 82, CLUSTER = 83, 
    CLUSTERED = 84, CODEGEN = 85, COLLATE = 86, COLLECTION = 87, COLUMN = 88, 
    COLUMNS = 89, COMMENT = 90, COMMIT = 91, COMPACT = 92, COMPACTIONS = 93, 
    COMPUTE = 94, CONCATENATE = 95, CONSTRAINT = 96, COST = 97, CREATE = 98, 
    CROSS = 99, CUBE = 100, CURRENT = 101, CURRENT_DATE = 102, CURRENT_TIME = 103, 
    CURRENT_TIMESTAMP = 104, CURRENT_USER = 105, DATA = 106, DATABASE = 107, 
    DATABASES = 108, DAY = 109, DBPROPERTIES = 110, DEFINED = 111, DELETE = 112, 
    DELIMITED = 113, DESC = 114, DESCRIBE = 115, DFS = 116, DIRECTORIES = 117, 
    DIRECTORY = 118, DISTINCT = 119, DISTRIBUTE = 120, DROP = 121, ELSE = 122, 
    END = 123, ESCAPE = 124, ESCAPED = 125, EXCEPT = 126, EXCHANGE = 127, 
    EXISTS = 128, EXPLAIN = 129, EXPORT = 130, EXTENDED = 131, EXTERNAL = 132, 
    EXTRACT = 133, FALSE = 134, FETCH = 135, FIELDS = 136, FILTER = 137, 
    FILEFORMAT = 138, FIRST = 139, FOLLOWING = 140, FOR = 141, FOREIGN = 142, 
    FORMAT = 143, FORMATTED = 144, FROM = 145, FULL = 146, FUNCTION = 147, 
    FUNCTIONS = 148, GLOBAL = 149, GRANT = 150, GROUP = 151, GROUPING = 152, 
    HAVING = 153, HOUR = 154, IF = 155, IGNORE = 156, IMPORT = 157, IN = 158, 
    INDEX = 159, INDEXES = 160, INNER = 161, INPATH = 162, INPUTFORMAT = 163, 
    INSERT = 164, INTERSECT = 165, INTERVAL = 166, INTO = 167, IS = 168, 
    ITEMS = 169, JOIN = 170, KEYS = 171, LAST = 172, LATERAL = 173, LAZY = 174, 
    LEADING = 175, LEFT = 176, LIKE = 177, LIMIT = 178, LINES = 179, LIST = 180, 
    LOAD = 181, LOCAL = 182, LOCATION = 183, LOCK = 184, LOCKS = 185, LOGICAL = 186, 
    MACRO = 187, MAP = 188, MATCHED = 189, MERGE = 190, MINUTE = 191, MONTH = 192, 
    MSCK = 193, NAMESPACE = 194, NAMESPACES = 195, NATURAL = 196, NO = 197, 
    NOT = 198, THENULL = 199, THENULLS = 200, OF = 201, ON = 202, ONLY = 203, 
    OPTION = 204, OPTIONS = 205, OR = 206, ORDER = 207, OUT = 208, OUTER = 209, 
    OUTPUTFORMAT = 210, OVER = 211, OVERLAPS = 212, OVERLAY = 213, OVERWRITE = 214, 
    PARTITION = 215, PARTITIONED = 216, PARTITIONS = 217, PERCENTLIT = 218, 
    PIVOT = 219, PLACING = 220, POSITION = 221, PRECEDING = 222, PRIMARY = 223, 
    PRINCIPALS = 224, PROPERTIES = 225, PURGE = 226, QUERY = 227, RANGE = 228, 
    RECORDREADER = 229, RECORDWRITER = 230, RECOVER = 231, REDUCE = 232, 
    REFERENCES = 233, REFRESH = 234, RENAME = 235, REPAIR = 236, REPLACE = 237, 
    RESET = 238, RESTRICT = 239, REVOKE = 240, RIGHT = 241, RLIKE = 242, 
    ROLE = 243, ROLES = 244, ROLLBACK = 245, ROLLUP = 246, ROW = 247, ROWS = 248, 
    SCHEMA = 249, SECOND = 250, SELECT = 251, SEMI = 252, SEPARATED = 253, 
    SERDE = 254, SERDEPROPERTIES = 255, SESSION_USER = 256, SET = 257, SETMINUS = 258, 
    SETS = 259, SHOW = 260, SKEWED = 261, SOME = 262, SORT = 263, SORTED = 264, 
    START = 265, STATISTICS = 266, STORED = 267, STRATIFY = 268, STRUCT = 269, 
    SUBSTR = 270, SUBSTRING = 271, TABLE = 272, TABLES = 273, TABLESAMPLE = 274, 
    TBLPROPERTIES = 275, TEMPORARY = 276, TERMINATED = 277, THEN = 278, 
    TO = 279, TOUCH = 280, TRAILING = 281, TRANSACTION = 282, TRANSACTIONS = 283, 
    TRANSFORM = 284, TRIM = 285, TRUE = 286, TRUNCATE = 287, TYPE = 288, 
    UNARCHIVE = 289, UNBOUNDED = 290, UNCACHE = 291, UNION = 292, UNIQUE = 293, 
    UNKNOWN = 294, UNLOCK = 295, UNSET = 296, UPDATE = 297, USE = 298, USER = 299, 
    USING = 300, VALUES = 301, VIEW = 302, VIEWS = 303, WHEN = 304, WHERE = 305, 
    WINDOW = 306, WITH = 307, YEAR = 308, EQUAL = 309, DOUBLEEQUAL = 310, 
    NSEQ = 311, NEQ = 312, NEQJ = 313, LT = 314, LTE = 315, GT = 316, GTE = 317, 
    PLUS = 318, MINUS = 319, ASTERISK = 320, SLASH = 321, PERCENT = 322, 
    DIV = 323, TILDE = 324, AMPERSAND = 325, PIPE = 326, CONCAT_PIPE = 327, 
    HAT = 328, STRING = 329, BIGINT_LITERAL = 330, SMALLINT_LITERAL = 331, 
    TINYINT_LITERAL = 332, INTEGER_VALUE = 333, EXPONENT_VALUE = 334, DECIMAL_VALUE = 335, 
    DOUBLE_LITERAL = 336, BIGDECIMAL_LITERAL = 337, IDENTIFIER = 338, BACKQUOTED_IDENTIFIER = 339, 
    SIMPLE_COMMENT = 340, BRACKETED_COMMENT = 341, WS = 342, UNRECOGNIZED = 343
  };

  enum {
    RuleFugueLanguage = 0, RuleFugueSingleStatement = 1, RuleFugueSingleTask = 2, 
    RuleFugueNestableTask = 3, RuleFugueNestableTaskCollectionNoSelect = 4, 
    RuleFugueTransformTask = 5, RuleFugueProcessTask = 6, RuleFugueSaveAndUseTask = 7, 
    RuleFugueRenameColumnsTask = 8, RuleFugueAlterColumnsTask = 9, RuleFugueDropColumnsTask = 10, 
    RuleFugueDropnaTask = 11, RuleFugueFillnaTask = 12, RuleFugueSampleTask = 13, 
    RuleFugueTakeTask = 14, RuleFugueZipTask = 15, RuleFugueCreateTask = 16, 
    RuleFugueCreateDataTask = 17, RuleFugueLoadTask = 18, RuleFugueOutputTask = 19, 
    RuleFuguePrintTask = 20, RuleFugueSaveTask = 21, RuleFugueOutputTransformTask = 22, 
    RuleFugueModuleTask = 23, RuleFugueSqlEngine = 24, RuleFugueSingleFile = 25, 
    RuleFugueLoadColumns = 26, RuleFugueSaveMode = 27, RuleFugueFileFormat = 28, 
    RuleFuguePath = 29, RuleFugueCheckpoint = 30, RuleFugueCheckpointNamespace = 31, 
    RuleFugueYield = 32, RuleFugueBroadcast = 33, RuleFugueDataFrames = 34, 
    RuleFugueDataFramePair = 35, RuleFugueDataFrame = 36, RuleFugueDataFrameMember = 37, 
    RuleFugueAssignment = 38, RuleFugueAssignmentSign = 39, RuleFugueSingleOutputExtensionCommonWild = 40, 
    RuleFugueSingleOutputExtensionCommon = 41, RuleFugueExtension = 42, 
    RuleFugueSampleMethod = 43, RuleFugueZipType = 44, RuleFuguePrepartition = 45, 
    RuleFuguePartitionAlgo = 46, RuleFuguePartitionNum = 47, RuleFuguePartitionNumber = 48, 
    RuleFugueParams = 49, RuleFugueCols = 50, RuleFugueColsSort = 51, RuleFugueColSort = 52, 
    RuleFugueColumnIdentifier = 53, RuleFugueRenameExpression = 54, RuleFugueWildSchema = 55, 
    RuleFugueWildSchemaPair = 56, RuleFugueSchemaOp = 57, RuleFugueSchema = 58, 
    RuleFugueSchemaPair = 59, RuleFugueSchemaKey = 60, RuleFugueSchemaType = 61, 
    RuleFugueRenamePair = 62, RuleFugueJson = 63, RuleFugueJsonObj = 64, 
    RuleFugueJsonPairs = 65, RuleFugueJsonPair = 66, RuleFugueJsonKey = 67, 
    RuleFugueJsonArray = 68, RuleFugueJsonValue = 69, RuleFugueJsonNumber = 70, 
    RuleFugueJsonString = 71, RuleFugueJsonBool = 72, RuleFugueJsonNull = 73, 
    RuleFugueIdentifier = 74, RuleSingleStatement = 75, RuleSingleExpression = 76, 
    RuleSingleTableIdentifier = 77, RuleSingleMultipartIdentifier = 78, 
    RuleSingleFunctionIdentifier = 79, RuleSingleDataType = 80, RuleSingleTableSchema = 81, 
    RuleStatement = 82, RuleUnsupportedHiveNativeCommands = 83, RuleCreateTableHeader = 84, 
    RuleReplaceTableHeader = 85, RuleBucketSpec = 86, RuleSkewSpec = 87, 
    RuleLocationSpec = 88, RuleCommentSpec = 89, RuleQuery = 90, RuleInsertInto = 91, 
    RulePartitionSpecLocation = 92, RulePartitionSpec = 93, RulePartitionVal = 94, 
    RuleTheNamespace = 95, RuleDescribeFuncName = 96, RuleDescribeColName = 97, 
    RuleCtes = 98, RuleNamedQuery = 99, RuleTableProvider = 100, RuleCreateTableClauses = 101, 
    RuleTablePropertyList = 102, RuleTableProperty = 103, RuleTablePropertyKey = 104, 
    RuleTablePropertyValue = 105, RuleConstantList = 106, RuleNestedConstantList = 107, 
    RuleCreateFileFormat = 108, RuleFileFormat = 109, RuleStorageHandler = 110, 
    RuleResource = 111, RuleDmlStatementNoWith = 112, RuleQueryOrganization = 113, 
    RuleMultiInsertQueryBody = 114, RuleQueryTerm = 115, RuleQueryPrimary = 116, 
    RuleSortItem = 117, RuleFromStatement = 118, RuleFromStatementBody = 119, 
    RuleQuerySpecification = 120, RuleOptionalFromClause = 121, RuleTransformClause = 122, 
    RuleSelectClause = 123, RuleSetClause = 124, RuleMatchedClause = 125, 
    RuleNotMatchedClause = 126, RuleMatchedAction = 127, RuleNotMatchedAction = 128, 
    RuleAssignmentList = 129, RuleAssignment = 130, RuleWhereClause = 131, 
    RuleHavingClause = 132, RuleHint = 133, RuleHintStatement = 134, RuleFromClause = 135, 
    RuleAggregationClause = 136, RuleGroupingSet = 137, RulePivotClause = 138, 
    RulePivotColumn = 139, RulePivotValue = 140, RuleLateralView = 141, 
    RuleSetQuantifier = 142, RuleRelation = 143, RuleJoinRelation = 144, 
    RuleJoinType = 145, RuleJoinCriteria = 146, RuleSample = 147, RuleSampleMethod = 148, 
    RuleIdentifierList = 149, RuleIdentifierSeq = 150, RuleOrderedIdentifierList = 151, 
    RuleOrderedIdentifier = 152, RuleIdentifierCommentList = 153, RuleIdentifierComment = 154, 
    RuleRelationPrimary = 155, RuleInlineTable = 156, RuleFunctionTable = 157, 
    RuleTableAlias = 158, RuleRowFormat = 159, RuleMultipartIdentifierList = 160, 
    RuleMultipartIdentifier = 161, RuleTableIdentifier = 162, RuleFunctionIdentifier = 163, 
    RuleNamedExpression = 164, RuleNamedExpressionSeq = 165, RuleTransformList = 166, 
    RuleTransform = 167, RuleTransformArgument = 168, RuleExpression = 169, 
    RuleBooleanExpression = 170, RulePredicate = 171, RuleValueExpression = 172, 
    RulePrimaryExpression = 173, RuleConstant = 174, RuleComparisonOperator = 175, 
    RuleComparisonEqualOperator = 176, RuleArithmeticOperator = 177, RulePredicateOperator = 178, 
    RuleBooleanValue = 179, RuleInterval = 180, RuleErrorCapturingMultiUnitsInterval = 181, 
    RuleMultiUnitsInterval = 182, RuleErrorCapturingUnitToUnitInterval = 183, 
    RuleUnitToUnitInterval = 184, RuleIntervalValue = 185, RuleIntervalUnit = 186, 
    RuleColPosition = 187, RuleDataType = 188, RuleQualifiedColTypeWithPositionList = 189, 
    RuleQualifiedColTypeWithPosition = 190, RuleColTypeList = 191, RuleColType = 192, 
    RuleComplexColTypeList = 193, RuleComplexColType = 194, RuleWhenClause = 195, 
    RuleWindowClause = 196, RuleNamedWindow = 197, RuleWindowSpec = 198, 
    RuleWindowFrame = 199, RuleFrameBound = 200, RuleQualifiedNameList = 201, 
    RuleFunctionName = 202, RuleQualifiedName = 203, RuleErrorCapturingIdentifier = 204, 
    RuleErrorCapturingIdentifierExtra = 205, RuleIdentifier = 206, RuleStrictIdentifier = 207, 
    RuleQuotedIdentifier = 208, RuleNumber = 209, RuleAlterColumnAction = 210, 
    RuleAnsiNonReserved = 211, RuleStrictNonReserved = 212, RuleNonReserved = 213
  };

  explicit fugue_sqlParser(antlr4::TokenStream *input);

  fugue_sqlParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~fugue_sqlParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class FugueLanguageContext;
  class FugueSingleStatementContext;
  class FugueSingleTaskContext;
  class FugueNestableTaskContext;
  class FugueNestableTaskCollectionNoSelectContext;
  class FugueTransformTaskContext;
  class FugueProcessTaskContext;
  class FugueSaveAndUseTaskContext;
  class FugueRenameColumnsTaskContext;
  class FugueAlterColumnsTaskContext;
  class FugueDropColumnsTaskContext;
  class FugueDropnaTaskContext;
  class FugueFillnaTaskContext;
  class FugueSampleTaskContext;
  class FugueTakeTaskContext;
  class FugueZipTaskContext;
  class FugueCreateTaskContext;
  class FugueCreateDataTaskContext;
  class FugueLoadTaskContext;
  class FugueOutputTaskContext;
  class FuguePrintTaskContext;
  class FugueSaveTaskContext;
  class FugueOutputTransformTaskContext;
  class FugueModuleTaskContext;
  class FugueSqlEngineContext;
  class FugueSingleFileContext;
  class FugueLoadColumnsContext;
  class FugueSaveModeContext;
  class FugueFileFormatContext;
  class FuguePathContext;
  class FugueCheckpointContext;
  class FugueCheckpointNamespaceContext;
  class FugueYieldContext;
  class FugueBroadcastContext;
  class FugueDataFramesContext;
  class FugueDataFramePairContext;
  class FugueDataFrameContext;
  class FugueDataFrameMemberContext;
  class FugueAssignmentContext;
  class FugueAssignmentSignContext;
  class FugueSingleOutputExtensionCommonWildContext;
  class FugueSingleOutputExtensionCommonContext;
  class FugueExtensionContext;
  class FugueSampleMethodContext;
  class FugueZipTypeContext;
  class FuguePrepartitionContext;
  class FuguePartitionAlgoContext;
  class FuguePartitionNumContext;
  class FuguePartitionNumberContext;
  class FugueParamsContext;
  class FugueColsContext;
  class FugueColsSortContext;
  class FugueColSortContext;
  class FugueColumnIdentifierContext;
  class FugueRenameExpressionContext;
  class FugueWildSchemaContext;
  class FugueWildSchemaPairContext;
  class FugueSchemaOpContext;
  class FugueSchemaContext;
  class FugueSchemaPairContext;
  class FugueSchemaKeyContext;
  class FugueSchemaTypeContext;
  class FugueRenamePairContext;
  class FugueJsonContext;
  class FugueJsonObjContext;
  class FugueJsonPairsContext;
  class FugueJsonPairContext;
  class FugueJsonKeyContext;
  class FugueJsonArrayContext;
  class FugueJsonValueContext;
  class FugueJsonNumberContext;
  class FugueJsonStringContext;
  class FugueJsonBoolContext;
  class FugueJsonNullContext;
  class FugueIdentifierContext;
  class SingleStatementContext;
  class SingleExpressionContext;
  class SingleTableIdentifierContext;
  class SingleMultipartIdentifierContext;
  class SingleFunctionIdentifierContext;
  class SingleDataTypeContext;
  class SingleTableSchemaContext;
  class StatementContext;
  class UnsupportedHiveNativeCommandsContext;
  class CreateTableHeaderContext;
  class ReplaceTableHeaderContext;
  class BucketSpecContext;
  class SkewSpecContext;
  class LocationSpecContext;
  class CommentSpecContext;
  class QueryContext;
  class InsertIntoContext;
  class PartitionSpecLocationContext;
  class PartitionSpecContext;
  class PartitionValContext;
  class TheNamespaceContext;
  class DescribeFuncNameContext;
  class DescribeColNameContext;
  class CtesContext;
  class NamedQueryContext;
  class TableProviderContext;
  class CreateTableClausesContext;
  class TablePropertyListContext;
  class TablePropertyContext;
  class TablePropertyKeyContext;
  class TablePropertyValueContext;
  class ConstantListContext;
  class NestedConstantListContext;
  class CreateFileFormatContext;
  class FileFormatContext;
  class StorageHandlerContext;
  class ResourceContext;
  class DmlStatementNoWithContext;
  class QueryOrganizationContext;
  class MultiInsertQueryBodyContext;
  class QueryTermContext;
  class QueryPrimaryContext;
  class SortItemContext;
  class FromStatementContext;
  class FromStatementBodyContext;
  class QuerySpecificationContext;
  class OptionalFromClauseContext;
  class TransformClauseContext;
  class SelectClauseContext;
  class SetClauseContext;
  class MatchedClauseContext;
  class NotMatchedClauseContext;
  class MatchedActionContext;
  class NotMatchedActionContext;
  class AssignmentListContext;
  class AssignmentContext;
  class WhereClauseContext;
  class HavingClauseContext;
  class HintContext;
  class HintStatementContext;
  class FromClauseContext;
  class AggregationClauseContext;
  class GroupingSetContext;
  class PivotClauseContext;
  class PivotColumnContext;
  class PivotValueContext;
  class LateralViewContext;
  class SetQuantifierContext;
  class RelationContext;
  class JoinRelationContext;
  class JoinTypeContext;
  class JoinCriteriaContext;
  class SampleContext;
  class SampleMethodContext;
  class IdentifierListContext;
  class IdentifierSeqContext;
  class OrderedIdentifierListContext;
  class OrderedIdentifierContext;
  class IdentifierCommentListContext;
  class IdentifierCommentContext;
  class RelationPrimaryContext;
  class InlineTableContext;
  class FunctionTableContext;
  class TableAliasContext;
  class RowFormatContext;
  class MultipartIdentifierListContext;
  class MultipartIdentifierContext;
  class TableIdentifierContext;
  class FunctionIdentifierContext;
  class NamedExpressionContext;
  class NamedExpressionSeqContext;
  class TransformListContext;
  class TransformContext;
  class TransformArgumentContext;
  class ExpressionContext;
  class BooleanExpressionContext;
  class PredicateContext;
  class ValueExpressionContext;
  class PrimaryExpressionContext;
  class ConstantContext;
  class ComparisonOperatorContext;
  class ComparisonEqualOperatorContext;
  class ArithmeticOperatorContext;
  class PredicateOperatorContext;
  class BooleanValueContext;
  class IntervalContext;
  class ErrorCapturingMultiUnitsIntervalContext;
  class MultiUnitsIntervalContext;
  class ErrorCapturingUnitToUnitIntervalContext;
  class UnitToUnitIntervalContext;
  class IntervalValueContext;
  class IntervalUnitContext;
  class ColPositionContext;
  class DataTypeContext;
  class QualifiedColTypeWithPositionListContext;
  class QualifiedColTypeWithPositionContext;
  class ColTypeListContext;
  class ColTypeContext;
  class ComplexColTypeListContext;
  class ComplexColTypeContext;
  class WhenClauseContext;
  class WindowClauseContext;
  class NamedWindowContext;
  class WindowSpecContext;
  class WindowFrameContext;
  class FrameBoundContext;
  class QualifiedNameListContext;
  class FunctionNameContext;
  class QualifiedNameContext;
  class ErrorCapturingIdentifierContext;
  class ErrorCapturingIdentifierExtraContext;
  class IdentifierContext;
  class StrictIdentifierContext;
  class QuotedIdentifierContext;
  class NumberContext;
  class AlterColumnActionContext;
  class AnsiNonReservedContext;
  class StrictNonReservedContext;
  class NonReservedContext; 

  class  FugueLanguageContext : public antlr4::ParserRuleContext {
  public:
    FugueLanguageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<FugueSingleTaskContext *> fugueSingleTask();
    FugueSingleTaskContext* fugueSingleTask(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueLanguageContext* fugueLanguage();

  class  FugueSingleStatementContext : public antlr4::ParserRuleContext {
  public:
    FugueSingleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueSingleTaskContext *fugueSingleTask();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSingleStatementContext* fugueSingleStatement();

  class  FugueSingleTaskContext : public antlr4::ParserRuleContext {
  public:
    FugueSingleTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueNestableTaskContext *fugueNestableTask();
    FugueOutputTransformTaskContext *fugueOutputTransformTask();
    FugueOutputTaskContext *fugueOutputTask();
    FuguePrintTaskContext *fuguePrintTask();
    FugueSaveTaskContext *fugueSaveTask();
    FugueModuleTaskContext *fugueModuleTask();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSingleTaskContext* fugueSingleTask();

  class  FugueNestableTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueAssignmentContext *assign = nullptr;
    fugue_sqlParser::QueryContext *q = nullptr;
    fugue_sqlParser::FugueCheckpointContext *checkpoint = nullptr;
    fugue_sqlParser::FugueBroadcastContext *broadcast = nullptr;
    fugue_sqlParser::FugueYieldContext *y = nullptr;
    FugueNestableTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryContext *query();
    FugueAssignmentContext *fugueAssignment();
    FugueCheckpointContext *fugueCheckpoint();
    FugueBroadcastContext *fugueBroadcast();
    FugueYieldContext *fugueYield();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueNestableTaskContext* fugueNestableTask();

  class  FugueNestableTaskCollectionNoSelectContext : public antlr4::ParserRuleContext {
  public:
    FugueNestableTaskCollectionNoSelectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueTransformTaskContext *fugueTransformTask();
    FugueProcessTaskContext *fugueProcessTask();
    FugueZipTaskContext *fugueZipTask();
    FugueCreateTaskContext *fugueCreateTask();
    FugueCreateDataTaskContext *fugueCreateDataTask();
    FugueLoadTaskContext *fugueLoadTask();
    FugueSaveAndUseTaskContext *fugueSaveAndUseTask();
    FugueRenameColumnsTaskContext *fugueRenameColumnsTask();
    FugueAlterColumnsTaskContext *fugueAlterColumnsTask();
    FugueDropColumnsTaskContext *fugueDropColumnsTask();
    FugueDropnaTaskContext *fugueDropnaTask();
    FugueFillnaTaskContext *fugueFillnaTask();
    FugueSampleTaskContext *fugueSampleTask();
    FugueTakeTaskContext *fugueTakeTask();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueNestableTaskCollectionNoSelectContext* fugueNestableTaskCollectionNoSelect();

  class  FugueTransformTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueDataFramesContext *dfs = nullptr;
    fugue_sqlParser::FuguePrepartitionContext *partition = nullptr;
    fugue_sqlParser::FugueSingleOutputExtensionCommonWildContext *params = nullptr;
    fugue_sqlParser::FugueExtensionContext *callback = nullptr;
    FugueTransformTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRANSFORM();
    FugueSingleOutputExtensionCommonWildContext *fugueSingleOutputExtensionCommonWild();
    antlr4::tree::TerminalNode *CALLBACK();
    FugueDataFramesContext *fugueDataFrames();
    FuguePrepartitionContext *fuguePrepartition();
    FugueExtensionContext *fugueExtension();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueTransformTaskContext* fugueTransformTask();

  class  FugueProcessTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueDataFramesContext *dfs = nullptr;
    fugue_sqlParser::FuguePrepartitionContext *partition = nullptr;
    fugue_sqlParser::FugueSingleOutputExtensionCommonContext *params = nullptr;
    FugueProcessTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCESS();
    FugueSingleOutputExtensionCommonContext *fugueSingleOutputExtensionCommon();
    FugueDataFramesContext *fugueDataFrames();
    FuguePrepartitionContext *fuguePrepartition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueProcessTaskContext* fugueProcessTask();

  class  FugueSaveAndUseTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueDataFrameContext *df = nullptr;
    fugue_sqlParser::FuguePrepartitionContext *partition = nullptr;
    fugue_sqlParser::FugueSaveModeContext *m = nullptr;
    fugue_sqlParser::FugueSingleFileContext *single = nullptr;
    fugue_sqlParser::FugueFileFormatContext *fmt = nullptr;
    fugue_sqlParser::FuguePathContext *path = nullptr;
    fugue_sqlParser::FugueParamsContext *params = nullptr;
    FugueSaveAndUseTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVE();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *USE();
    FugueSaveModeContext *fugueSaveMode();
    FuguePathContext *fuguePath();
    FugueDataFrameContext *fugueDataFrame();
    FuguePrepartitionContext *fuguePrepartition();
    FugueSingleFileContext *fugueSingleFile();
    FugueFileFormatContext *fugueFileFormat();
    FugueParamsContext *fugueParams();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSaveAndUseTaskContext* fugueSaveAndUseTask();

  class  FugueRenameColumnsTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueRenameExpressionContext *cols = nullptr;
    fugue_sqlParser::FugueDataFrameContext *df = nullptr;
    FugueRenameColumnsTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *COLUMNS();
    FugueRenameExpressionContext *fugueRenameExpression();
    antlr4::tree::TerminalNode *FROM();
    FugueDataFrameContext *fugueDataFrame();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueRenameColumnsTaskContext* fugueRenameColumnsTask();

  class  FugueAlterColumnsTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueSchemaContext *cols = nullptr;
    fugue_sqlParser::FugueDataFrameContext *df = nullptr;
    FugueAlterColumnsTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *COLUMNS();
    FugueSchemaContext *fugueSchema();
    antlr4::tree::TerminalNode *FROM();
    FugueDataFrameContext *fugueDataFrame();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueAlterColumnsTaskContext* fugueAlterColumnsTask();

  class  FugueDropColumnsTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueColsContext *cols = nullptr;
    fugue_sqlParser::FugueDataFrameContext *df = nullptr;
    FugueDropColumnsTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *COLUMNS();
    FugueColsContext *fugueCols();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *FROM();
    FugueDataFrameContext *fugueDataFrame();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueDropColumnsTaskContext* fugueDropColumnsTask();

  class  FugueDropnaTaskContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *how = nullptr;
    fugue_sqlParser::FugueColsContext *cols = nullptr;
    fugue_sqlParser::FugueDataFrameContext *df = nullptr;
    FugueDropnaTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *THENULL();
    antlr4::tree::TerminalNode *THENULLS();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *FROM();
    FugueColsContext *fugueCols();
    FugueDataFrameContext *fugueDataFrame();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueDropnaTaskContext* fugueDropnaTask();

  class  FugueFillnaTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueParamsContext *params = nullptr;
    fugue_sqlParser::FugueDataFrameContext *df = nullptr;
    FugueFillnaTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILL();
    antlr4::tree::TerminalNode *THENULL();
    antlr4::tree::TerminalNode *THENULLS();
    FugueParamsContext *fugueParams();
    antlr4::tree::TerminalNode *FROM();
    FugueDataFrameContext *fugueDataFrame();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueFillnaTaskContext* fugueFillnaTask();

  class  FugueSampleTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueSampleMethodContext *method = nullptr;
    antlr4::Token *seed = nullptr;
    fugue_sqlParser::FugueDataFrameContext *df = nullptr;
    fugue_sqlParser::FugueColsContext *by = nullptr;
    FugueSampleTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAMPLE();
    FugueSampleMethodContext *fugueSampleMethod();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *SEED();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *PREPARTITION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    FugueDataFrameContext *fugueDataFrame();
    FugueColsContext *fugueCols();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSampleTaskContext* fugueSampleTask();

  class  FugueTakeTaskContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *rows = nullptr;
    fugue_sqlParser::FugueDataFrameContext *df = nullptr;
    fugue_sqlParser::FuguePrepartitionContext *partition = nullptr;
    fugue_sqlParser::FugueColsSortContext *presort = nullptr;
    antlr4::Token *na_position = nullptr;
    FugueTakeTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAKE();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    FugueDataFrameContext *fugueDataFrame();
    antlr4::tree::TerminalNode *THENULL();
    antlr4::tree::TerminalNode *THENULLS();
    antlr4::tree::TerminalNode *PRESORT();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *LAST();
    FuguePrepartitionContext *fuguePrepartition();
    FugueColsSortContext *fugueColsSort();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueTakeTaskContext* fugueTakeTask();

  class  FugueZipTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueDataFramesContext *dfs = nullptr;
    fugue_sqlParser::FugueZipTypeContext *how = nullptr;
    fugue_sqlParser::FugueColsContext *by = nullptr;
    fugue_sqlParser::FugueColsSortContext *presort = nullptr;
    FugueZipTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ZIP();
    FugueDataFramesContext *fugueDataFrames();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PRESORT();
    FugueZipTypeContext *fugueZipType();
    FugueColsContext *fugueCols();
    FugueColsSortContext *fugueColsSort();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueZipTaskContext* fugueZipTask();

  class  FugueCreateTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueSingleOutputExtensionCommonContext *params = nullptr;
    FugueCreateTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    FugueSingleOutputExtensionCommonContext *fugueSingleOutputExtensionCommon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueCreateTaskContext* fugueCreateTask();

  class  FugueCreateDataTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueJsonArrayContext *data = nullptr;
    fugue_sqlParser::FugueSchemaContext *schema = nullptr;
    FugueCreateDataTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SCHEMA();
    FugueJsonArrayContext *fugueJsonArray();
    FugueSchemaContext *fugueSchema();
    antlr4::tree::TerminalNode *DATA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueCreateDataTaskContext* fugueCreateDataTask();

  class  FugueLoadTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueFileFormatContext *fmt = nullptr;
    fugue_sqlParser::FuguePathContext *path = nullptr;
    fugue_sqlParser::FugueParamsContext *params = nullptr;
    fugue_sqlParser::FugueLoadColumnsContext *columns = nullptr;
    FugueLoadTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    FuguePathContext *fuguePath();
    antlr4::tree::TerminalNode *COLUMNS();
    FugueFileFormatContext *fugueFileFormat();
    FugueParamsContext *fugueParams();
    FugueLoadColumnsContext *fugueLoadColumns();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueLoadTaskContext* fugueLoadTask();

  class  FugueOutputTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueDataFramesContext *dfs = nullptr;
    fugue_sqlParser::FuguePrepartitionContext *partition = nullptr;
    fugue_sqlParser::FugueExtensionContext *fugueUsing = nullptr;
    fugue_sqlParser::FugueParamsContext *params = nullptr;
    FugueOutputTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *USING();
    FugueExtensionContext *fugueExtension();
    FugueDataFramesContext *fugueDataFrames();
    FuguePrepartitionContext *fuguePrepartition();
    FugueParamsContext *fugueParams();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueOutputTaskContext* fugueOutputTask();

  class  FuguePrintTaskContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *rows = nullptr;
    fugue_sqlParser::FugueDataFramesContext *dfs = nullptr;
    antlr4::Token *count = nullptr;
    antlr4::Token *title = nullptr;
    FuguePrintTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *TITLE();
    FugueDataFramesContext *fugueDataFrames();
    antlr4::tree::TerminalNode *ROWCOUNT();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuguePrintTaskContext* fuguePrintTask();

  class  FugueSaveTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueDataFrameContext *df = nullptr;
    fugue_sqlParser::FuguePrepartitionContext *partition = nullptr;
    fugue_sqlParser::FugueSaveModeContext *m = nullptr;
    fugue_sqlParser::FugueSingleFileContext *single = nullptr;
    fugue_sqlParser::FugueFileFormatContext *fmt = nullptr;
    fugue_sqlParser::FuguePathContext *path = nullptr;
    fugue_sqlParser::FugueParamsContext *params = nullptr;
    FugueSaveTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVE();
    FugueSaveModeContext *fugueSaveMode();
    FuguePathContext *fuguePath();
    FugueDataFrameContext *fugueDataFrame();
    FuguePrepartitionContext *fuguePrepartition();
    FugueSingleFileContext *fugueSingleFile();
    FugueFileFormatContext *fugueFileFormat();
    FugueParamsContext *fugueParams();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSaveTaskContext* fugueSaveTask();

  class  FugueOutputTransformTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueDataFramesContext *dfs = nullptr;
    fugue_sqlParser::FuguePrepartitionContext *partition = nullptr;
    fugue_sqlParser::FugueExtensionContext *fugueUsing = nullptr;
    fugue_sqlParser::FugueParamsContext *params = nullptr;
    fugue_sqlParser::FugueExtensionContext *callback = nullptr;
    FugueOutputTransformTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTTRANSFORM();
    antlr4::tree::TerminalNode *USING();
    std::vector<FugueExtensionContext *> fugueExtension();
    FugueExtensionContext* fugueExtension(size_t i);
    antlr4::tree::TerminalNode *CALLBACK();
    FugueDataFramesContext *fugueDataFrames();
    FuguePrepartitionContext *fuguePrepartition();
    FugueParamsContext *fugueParams();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueOutputTransformTaskContext* fugueOutputTransformTask();

  class  FugueModuleTaskContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueAssignmentContext *assign = nullptr;
    fugue_sqlParser::FugueDataFramesContext *dfs = nullptr;
    fugue_sqlParser::FugueExtensionContext *fugueUsing = nullptr;
    fugue_sqlParser::FugueParamsContext *params = nullptr;
    FugueModuleTaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *USING();
    FugueExtensionContext *fugueExtension();
    FugueAssignmentContext *fugueAssignment();
    FugueDataFramesContext *fugueDataFrames();
    FugueParamsContext *fugueParams();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueModuleTaskContext* fugueModuleTask();

  class  FugueSqlEngineContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueExtensionContext *fugueUsing = nullptr;
    fugue_sqlParser::FugueParamsContext *params = nullptr;
    FugueSqlEngineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONNECT();
    FugueExtensionContext *fugueExtension();
    FugueParamsContext *fugueParams();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSqlEngineContext* fugueSqlEngine();

  class  FugueSingleFileContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *single = nullptr;
    FugueSingleFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SINGLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSingleFileContext* fugueSingleFile();

  class  FugueLoadColumnsContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueSchemaContext *schema = nullptr;
    fugue_sqlParser::FugueColsContext *cols = nullptr;
    FugueLoadColumnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueSchemaContext *fugueSchema();
    FugueColsContext *fugueCols();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueLoadColumnsContext* fugueLoadColumns();

  class  FugueSaveModeContext : public antlr4::ParserRuleContext {
  public:
    FugueSaveModeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *OVERWRITE();
    antlr4::tree::TerminalNode *APPEND();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSaveModeContext* fugueSaveMode();

  class  FugueFileFormatContext : public antlr4::ParserRuleContext {
  public:
    FugueFileFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARQUET();
    antlr4::tree::TerminalNode *CSV();
    antlr4::tree::TerminalNode *JSON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueFileFormatContext* fugueFileFormat();

  class  FuguePathContext : public antlr4::ParserRuleContext {
  public:
    FuguePathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuguePathContext* fuguePath();

  class  FugueCheckpointContext : public antlr4::ParserRuleContext {
  public:
    FugueCheckpointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FugueCheckpointContext() = default;
    void copyFrom(FugueCheckpointContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FugueCheckpointDeterministicContext : public FugueCheckpointContext {
  public:
    FugueCheckpointDeterministicContext(FugueCheckpointContext *ctx);

    fugue_sqlParser::FugueCheckpointNamespaceContext *ns = nullptr;
    fugue_sqlParser::FuguePrepartitionContext *partition = nullptr;
    fugue_sqlParser::FugueSingleFileContext *single = nullptr;
    fugue_sqlParser::FugueParamsContext *params = nullptr;
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *CHECKPOINT();
    antlr4::tree::TerminalNode *LAZY();
    FugueCheckpointNamespaceContext *fugueCheckpointNamespace();
    FuguePrepartitionContext *fuguePrepartition();
    FugueSingleFileContext *fugueSingleFile();
    FugueParamsContext *fugueParams();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FugueCheckpointWeakContext : public FugueCheckpointContext {
  public:
    FugueCheckpointWeakContext(FugueCheckpointContext *ctx);

    fugue_sqlParser::FugueParamsContext *params = nullptr;
    antlr4::tree::TerminalNode *PERSIST();
    antlr4::tree::TerminalNode *WEAK();
    antlr4::tree::TerminalNode *CHECKPOINT();
    antlr4::tree::TerminalNode *LAZY();
    FugueParamsContext *fugueParams();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FugueCheckpointStrongContext : public FugueCheckpointContext {
  public:
    FugueCheckpointStrongContext(FugueCheckpointContext *ctx);

    fugue_sqlParser::FuguePrepartitionContext *partition = nullptr;
    fugue_sqlParser::FugueSingleFileContext *single = nullptr;
    fugue_sqlParser::FugueParamsContext *params = nullptr;
    antlr4::tree::TerminalNode *CHECKPOINT();
    antlr4::tree::TerminalNode *LAZY();
    antlr4::tree::TerminalNode *STRONG();
    FuguePrepartitionContext *fuguePrepartition();
    FugueSingleFileContext *fugueSingleFile();
    FugueParamsContext *fugueParams();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FugueCheckpointContext* fugueCheckpoint();

  class  FugueCheckpointNamespaceContext : public antlr4::ParserRuleContext {
  public:
    FugueCheckpointNamespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueCheckpointNamespaceContext* fugueCheckpointNamespace();

  class  FugueYieldContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueIdentifierContext *name = nullptr;
    FugueYieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *YIELD();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *AS();
    FugueIdentifierContext *fugueIdentifier();
    antlr4::tree::TerminalNode *DATAFRAME();
    antlr4::tree::TerminalNode *LOCAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueYieldContext* fugueYield();

  class  FugueBroadcastContext : public antlr4::ParserRuleContext {
  public:
    FugueBroadcastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BROADCAST();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueBroadcastContext* fugueBroadcast();

  class  FugueDataFramesContext : public antlr4::ParserRuleContext {
  public:
    FugueDataFramesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FugueDataFramesContext() = default;
    void copyFrom(FugueDataFramesContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FugueDataFramesDictContext : public FugueDataFramesContext {
  public:
    FugueDataFramesDictContext(FugueDataFramesContext *ctx);

    std::vector<FugueDataFramePairContext *> fugueDataFramePair();
    FugueDataFramePairContext* fugueDataFramePair(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FugueDataFramesListContext : public FugueDataFramesContext {
  public:
    FugueDataFramesListContext(FugueDataFramesContext *ctx);

    std::vector<FugueDataFrameContext *> fugueDataFrame();
    FugueDataFrameContext* fugueDataFrame(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FugueDataFramesContext* fugueDataFrames();

  class  FugueDataFramePairContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueIdentifierContext *key = nullptr;
    fugue_sqlParser::FugueDataFrameContext *value = nullptr;
    FugueDataFramePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueIdentifierContext *fugueIdentifier();
    antlr4::tree::TerminalNode *EQUAL();
    FugueDataFrameContext *fugueDataFrame();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueDataFramePairContext* fugueDataFramePair();

  class  FugueDataFrameContext : public antlr4::ParserRuleContext {
  public:
    FugueDataFrameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FugueDataFrameContext() = default;
    void copyFrom(FugueDataFrameContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FugueDataFrameSourceContext : public FugueDataFrameContext {
  public:
    FugueDataFrameSourceContext(FugueDataFrameContext *ctx);

    FugueIdentifierContext *fugueIdentifier();
    FugueDataFrameMemberContext *fugueDataFrameMember();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FugueDataFrameNestedContext : public FugueDataFrameContext {
  public:
    FugueDataFrameNestedContext(FugueDataFrameContext *ctx);

    fugue_sqlParser::FugueNestableTaskContext *task = nullptr;
    FugueNestableTaskContext *fugueNestableTask();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FugueDataFrameContext* fugueDataFrame();

  class  FugueDataFrameMemberContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *index = nullptr;
    fugue_sqlParser::FugueIdentifierContext *key = nullptr;
    FugueDataFrameMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    FugueIdentifierContext *fugueIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueDataFrameMemberContext* fugueDataFrameMember();

  class  FugueAssignmentContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueIdentifierContext *varname = nullptr;
    fugue_sqlParser::FugueAssignmentSignContext *sign = nullptr;
    FugueAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueIdentifierContext *fugueIdentifier();
    FugueAssignmentSignContext *fugueAssignmentSign();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueAssignmentContext* fugueAssignment();

  class  FugueAssignmentSignContext : public antlr4::ParserRuleContext {
  public:
    FugueAssignmentSignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueAssignmentSignContext* fugueAssignmentSign();

  class  FugueSingleOutputExtensionCommonWildContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueExtensionContext *fugueUsing = nullptr;
    fugue_sqlParser::FugueParamsContext *params = nullptr;
    fugue_sqlParser::FugueWildSchemaContext *schema = nullptr;
    FugueSingleOutputExtensionCommonWildContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    FugueExtensionContext *fugueExtension();
    antlr4::tree::TerminalNode *SCHEMA();
    FugueParamsContext *fugueParams();
    FugueWildSchemaContext *fugueWildSchema();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSingleOutputExtensionCommonWildContext* fugueSingleOutputExtensionCommonWild();

  class  FugueSingleOutputExtensionCommonContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueExtensionContext *fugueUsing = nullptr;
    fugue_sqlParser::FugueParamsContext *params = nullptr;
    fugue_sqlParser::FugueSchemaContext *schema = nullptr;
    FugueSingleOutputExtensionCommonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    FugueExtensionContext *fugueExtension();
    antlr4::tree::TerminalNode *SCHEMA();
    FugueParamsContext *fugueParams();
    FugueSchemaContext *fugueSchema();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSingleOutputExtensionCommonContext* fugueSingleOutputExtensionCommon();

  class  FugueExtensionContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueIdentifierContext *domain = nullptr;
    FugueExtensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FugueIdentifierContext *> fugueIdentifier();
    FugueIdentifierContext* fugueIdentifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueExtensionContext* fugueExtension();

  class  FugueSampleMethodContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *percentage = nullptr;
    antlr4::Token *rows = nullptr;
    FugueSampleMethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERCENTLIT();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    antlr4::tree::TerminalNode *DECIMAL_VALUE();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *APPROX();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSampleMethodContext* fugueSampleMethod();

  class  FugueZipTypeContext : public antlr4::ParserRuleContext {
  public:
    FugueZipTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *FULL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueZipTypeContext* fugueZipType();

  class  FuguePrepartitionContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FuguePartitionAlgoContext *algo = nullptr;
    fugue_sqlParser::FuguePartitionNumContext *num = nullptr;
    fugue_sqlParser::FugueColsContext *by = nullptr;
    fugue_sqlParser::FugueColsSortContext *presort = nullptr;
    FuguePrepartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARTITION();
    FuguePartitionNumContext *fuguePartitionNum();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PRESORT();
    FuguePartitionAlgoContext *fuguePartitionAlgo();
    FugueColsContext *fugueCols();
    FugueColsSortContext *fugueColsSort();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuguePrepartitionContext* fuguePrepartition();

  class  FuguePartitionAlgoContext : public antlr4::ParserRuleContext {
  public:
    FuguePartitionAlgoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *EVEN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuguePartitionAlgoContext* fuguePartitionAlgo();

  class  FuguePartitionNumContext : public antlr4::ParserRuleContext {
  public:
    FuguePartitionNumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuguePartitionNumberContext *fuguePartitionNumber();
    std::vector<FuguePartitionNumContext *> fuguePartitionNum();
    FuguePartitionNumContext* fuguePartitionNum(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *SLASH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuguePartitionNumContext* fuguePartitionNum();
  FuguePartitionNumContext* fuguePartitionNum(int precedence);
  class  FuguePartitionNumberContext : public antlr4::ParserRuleContext {
  public:
    FuguePartitionNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_VALUE();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    antlr4::tree::TerminalNode *ROWCOUNT();
    antlr4::tree::TerminalNode *CONCURRENCY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuguePartitionNumberContext* fuguePartitionNumber();

  class  FugueParamsContext : public antlr4::ParserRuleContext {
  public:
    FugueParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FugueParamsContext() = default;
    void copyFrom(FugueParamsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FugueParamsPairsContext : public FugueParamsContext {
  public:
    FugueParamsPairsContext(FugueParamsContext *ctx);

    fugue_sqlParser::FugueJsonPairsContext *pairs = nullptr;
    antlr4::tree::TerminalNode *PARAMS();
    FugueJsonPairsContext *fugueJsonPairs();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FugueParamsObjContext : public FugueParamsContext {
  public:
    FugueParamsObjContext(FugueParamsContext *ctx);

    fugue_sqlParser::FugueJsonObjContext *obj = nullptr;
    FugueJsonObjContext *fugueJsonObj();
    antlr4::tree::TerminalNode *PARAMS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FugueParamsContext* fugueParams();

  class  FugueColsContext : public antlr4::ParserRuleContext {
  public:
    FugueColsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FugueColumnIdentifierContext *> fugueColumnIdentifier();
    FugueColumnIdentifierContext* fugueColumnIdentifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueColsContext* fugueCols();

  class  FugueColsSortContext : public antlr4::ParserRuleContext {
  public:
    FugueColsSortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FugueColSortContext *> fugueColSort();
    FugueColSortContext* fugueColSort(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueColsSortContext* fugueColsSort();

  class  FugueColSortContext : public antlr4::ParserRuleContext {
  public:
    FugueColSortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueColumnIdentifierContext *fugueColumnIdentifier();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueColSortContext* fugueColSort();

  class  FugueColumnIdentifierContext : public antlr4::ParserRuleContext {
  public:
    FugueColumnIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueIdentifierContext *fugueIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueColumnIdentifierContext* fugueColumnIdentifier();

  class  FugueRenameExpressionContext : public antlr4::ParserRuleContext {
  public:
    FugueRenameExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FugueRenamePairContext *> fugueRenamePair();
    FugueRenamePairContext* fugueRenamePair(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueRenameExpressionContext* fugueRenameExpression();

  class  FugueWildSchemaContext : public antlr4::ParserRuleContext {
  public:
    FugueWildSchemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FugueWildSchemaPairContext *> fugueWildSchemaPair();
    FugueWildSchemaPairContext* fugueWildSchemaPair(size_t i);
    std::vector<FugueSchemaOpContext *> fugueSchemaOp();
    FugueSchemaOpContext* fugueSchemaOp(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueWildSchemaContext* fugueWildSchema();

  class  FugueWildSchemaPairContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueSchemaPairContext *pair = nullptr;
    FugueWildSchemaPairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueSchemaPairContext *fugueSchemaPair();
    antlr4::tree::TerminalNode *ASTERISK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueWildSchemaPairContext* fugueWildSchemaPair();

  class  FugueSchemaOpContext : public antlr4::ParserRuleContext {
  public:
    FugueSchemaOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FugueSchemaKeyContext *> fugueSchemaKey();
    FugueSchemaKeyContext* fugueSchemaKey(size_t i);
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *PLUS();
    FugueSchemaContext *fugueSchema();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSchemaOpContext* fugueSchemaOp();

  class  FugueSchemaContext : public antlr4::ParserRuleContext {
  public:
    FugueSchemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FugueSchemaPairContext *> fugueSchemaPair();
    FugueSchemaPairContext* fugueSchemaPair(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSchemaContext* fugueSchema();

  class  FugueSchemaPairContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueSchemaKeyContext *key = nullptr;
    fugue_sqlParser::FugueSchemaTypeContext *value = nullptr;
    FugueSchemaPairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueSchemaKeyContext *fugueSchemaKey();
    FugueSchemaTypeContext *fugueSchemaType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSchemaPairContext* fugueSchemaPair();

  class  FugueSchemaKeyContext : public antlr4::ParserRuleContext {
  public:
    FugueSchemaKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueIdentifierContext *fugueIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueSchemaKeyContext* fugueSchemaKey();

  class  FugueSchemaTypeContext : public antlr4::ParserRuleContext {
  public:
    FugueSchemaTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FugueSchemaTypeContext() = default;
    void copyFrom(FugueSchemaTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FugueSchemaSimpleTypeContext : public FugueSchemaTypeContext {
  public:
    FugueSchemaSimpleTypeContext(FugueSchemaTypeContext *ctx);

    FugueIdentifierContext *fugueIdentifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FugueSchemaMapTypeContext : public FugueSchemaTypeContext {
  public:
    FugueSchemaMapTypeContext(FugueSchemaTypeContext *ctx);

    antlr4::tree::TerminalNode *LT();
    std::vector<FugueSchemaTypeContext *> fugueSchemaType();
    FugueSchemaTypeContext* fugueSchemaType(size_t i);
    antlr4::tree::TerminalNode *GT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FugueSchemaStructTypeContext : public FugueSchemaTypeContext {
  public:
    FugueSchemaStructTypeContext(FugueSchemaTypeContext *ctx);

    FugueSchemaContext *fugueSchema();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FugueSchemaListTypeContext : public FugueSchemaTypeContext {
  public:
    FugueSchemaListTypeContext(FugueSchemaTypeContext *ctx);

    FugueSchemaTypeContext *fugueSchemaType();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FugueSchemaTypeContext* fugueSchemaType();

  class  FugueRenamePairContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueSchemaKeyContext *key = nullptr;
    fugue_sqlParser::FugueSchemaKeyContext *value = nullptr;
    FugueRenamePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FugueSchemaKeyContext *> fugueSchemaKey();
    FugueSchemaKeyContext* fugueSchemaKey(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueRenamePairContext* fugueRenamePair();

  class  FugueJsonContext : public antlr4::ParserRuleContext {
  public:
    FugueJsonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueJsonValueContext *fugueJsonValue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueJsonContext* fugueJson();

  class  FugueJsonObjContext : public antlr4::ParserRuleContext {
  public:
    FugueJsonObjContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueJsonPairsContext *fugueJsonPairs();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueJsonObjContext* fugueJsonObj();

  class  FugueJsonPairsContext : public antlr4::ParserRuleContext {
  public:
    FugueJsonPairsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FugueJsonPairContext *> fugueJsonPair();
    FugueJsonPairContext* fugueJsonPair(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueJsonPairsContext* fugueJsonPairs();

  class  FugueJsonPairContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::FugueJsonKeyContext *key = nullptr;
    fugue_sqlParser::FugueJsonValueContext *value = nullptr;
    FugueJsonPairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueJsonKeyContext *fugueJsonKey();
    antlr4::tree::TerminalNode *EQUAL();
    FugueJsonValueContext *fugueJsonValue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueJsonPairContext* fugueJsonPair();

  class  FugueJsonKeyContext : public antlr4::ParserRuleContext {
  public:
    FugueJsonKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueIdentifierContext *fugueIdentifier();
    FugueJsonStringContext *fugueJsonString();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueJsonKeyContext* fugueJsonKey();

  class  FugueJsonArrayContext : public antlr4::ParserRuleContext {
  public:
    FugueJsonArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FugueJsonValueContext *> fugueJsonValue();
    FugueJsonValueContext* fugueJsonValue(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueJsonArrayContext* fugueJsonArray();

  class  FugueJsonValueContext : public antlr4::ParserRuleContext {
  public:
    FugueJsonValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FugueJsonStringContext *fugueJsonString();
    FugueJsonNumberContext *fugueJsonNumber();
    FugueJsonObjContext *fugueJsonObj();
    FugueJsonArrayContext *fugueJsonArray();
    FugueJsonBoolContext *fugueJsonBool();
    FugueJsonNullContext *fugueJsonNull();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueJsonValueContext* fugueJsonValue();

  class  FugueJsonNumberContext : public antlr4::ParserRuleContext {
  public:
    FugueJsonNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueJsonNumberContext* fugueJsonNumber();

  class  FugueJsonStringContext : public antlr4::ParserRuleContext {
  public:
    FugueJsonStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueJsonStringContext* fugueJsonString();

  class  FugueJsonBoolContext : public antlr4::ParserRuleContext {
  public:
    FugueJsonBoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueJsonBoolContext* fugueJsonBool();

  class  FugueJsonNullContext : public antlr4::ParserRuleContext {
  public:
    FugueJsonNullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THENULL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueJsonNullContext* fugueJsonNull();

  class  FugueIdentifierContext : public antlr4::ParserRuleContext {
  public:
    FugueIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FugueIdentifierContext* fugueIdentifier();

  class  SingleStatementContext : public antlr4::ParserRuleContext {
  public:
    SingleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleStatementContext* singleStatement();

  class  SingleExpressionContext : public antlr4::ParserRuleContext {
  public:
    SingleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamedExpressionContext *namedExpression();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleExpressionContext* singleExpression();

  class  SingleTableIdentifierContext : public antlr4::ParserRuleContext {
  public:
    SingleTableIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableIdentifierContext *tableIdentifier();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleTableIdentifierContext* singleTableIdentifier();

  class  SingleMultipartIdentifierContext : public antlr4::ParserRuleContext {
  public:
    SingleMultipartIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleMultipartIdentifierContext* singleMultipartIdentifier();

  class  SingleFunctionIdentifierContext : public antlr4::ParserRuleContext {
  public:
    SingleFunctionIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionIdentifierContext *functionIdentifier();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleFunctionIdentifierContext* singleFunctionIdentifier();

  class  SingleDataTypeContext : public antlr4::ParserRuleContext {
  public:
    SingleDataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleDataTypeContext* singleDataType();

  class  SingleTableSchemaContext : public antlr4::ParserRuleContext {
  public:
    SingleTableSchemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColTypeListContext *colTypeList();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleTableSchemaContext* singleTableSchema();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExplainContext : public StatementContext {
  public:
    ExplainContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *EXPLAIN();
    StatementContext *statement();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *FORMATTED();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *CODEGEN();
    antlr4::tree::TerminalNode *COST();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ResetConfigurationContext : public StatementContext {
  public:
    ResetConfigurationContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *RESET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterViewQueryContext : public StatementContext {
  public:
    AlterViewQueryContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *VIEW();
    MultipartIdentifierContext *multipartIdentifier();
    QueryContext *query();
    antlr4::tree::TerminalNode *AS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UseContext : public StatementContext {
  public:
    UseContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *USE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *NAMESPACE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DropNamespaceContext : public StatementContext {
  public:
    DropNamespaceContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    TheNamespaceContext *theNamespace();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateTempViewUsingContext : public StatementContext {
  public:
    CreateTempViewUsingContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *VIEW();
    TableIdentifierContext *tableIdentifier();
    TableProviderContext *tableProvider();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *GLOBAL();
    ColTypeListContext *colTypeList();
    antlr4::tree::TerminalNode *OPTIONS();
    TablePropertyListContext *tablePropertyList();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RenameTableContext : public StatementContext {
  public:
    RenameTableContext(StatementContext *ctx);

    fugue_sqlParser::MultipartIdentifierContext *ifrom = nullptr;
    fugue_sqlParser::MultipartIdentifierContext *to = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *VIEW();
    std::vector<MultipartIdentifierContext *> multipartIdentifier();
    MultipartIdentifierContext* multipartIdentifier(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FailNativeCommandContext : public StatementContext {
  public:
    FailNativeCommandContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *ROLE();
    UnsupportedHiveNativeCommandsContext *unsupportedHiveNativeCommands();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ClearCacheContext : public StatementContext {
  public:
    ClearCacheContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *CLEAR();
    antlr4::tree::TerminalNode *CACHE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DropViewContext : public StatementContext {
  public:
    DropViewContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *VIEW();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowTablesContext : public StatementContext {
  public:
    ShowTablesContext(StatementContext *ctx);

    antlr4::Token *pattern = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *TABLES();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LIKE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RecoverPartitionsContext : public StatementContext {
  public:
    RecoverPartitionsContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *PARTITIONS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowCurrentNamespaceContext : public StatementContext {
  public:
    ShowCurrentNamespaceContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *NAMESPACE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RenameTablePartitionContext : public StatementContext {
  public:
    RenameTablePartitionContext(StatementContext *ctx);

    fugue_sqlParser::PartitionSpecContext *ifrom = nullptr;
    fugue_sqlParser::PartitionSpecContext *to = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    std::vector<PartitionSpecContext *> partitionSpec();
    PartitionSpecContext* partitionSpec(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RepairTableContext : public StatementContext {
  public:
    RepairTableContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *MSCK();
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RefreshResourceContext : public StatementContext {
  public:
    RefreshResourceContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowCreateTableContext : public StatementContext {
  public:
    ShowCreateTableContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *SERDE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowNamespacesContext : public StatementContext {
  public:
    ShowNamespacesContext(StatementContext *ctx);

    antlr4::Token *pattern = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *NAMESPACES();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LIKE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowColumnsContext : public StatementContext {
  public:
    ShowColumnsContext(StatementContext *ctx);

    fugue_sqlParser::MultipartIdentifierContext *table = nullptr;
    fugue_sqlParser::MultipartIdentifierContext *ns = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *COLUMNS();
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    std::vector<MultipartIdentifierContext *> multipartIdentifier();
    MultipartIdentifierContext* multipartIdentifier(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReplaceTableContext : public StatementContext {
  public:
    ReplaceTableContext(StatementContext *ctx);

    ReplaceTableHeaderContext *replaceTableHeader();
    TableProviderContext *tableProvider();
    CreateTableClausesContext *createTableClauses();
    ColTypeListContext *colTypeList();
    QueryContext *query();
    antlr4::tree::TerminalNode *AS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddTablePartitionContext : public StatementContext {
  public:
    AddTablePartitionContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<PartitionSpecLocationContext *> partitionSpecLocation();
    PartitionSpecLocationContext* partitionSpecLocation(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetNamespaceLocationContext : public StatementContext {
  public:
    SetNamespaceLocationContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    TheNamespaceContext *theNamespace();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *SET();
    LocationSpecContext *locationSpec();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RefreshTableContext : public StatementContext {
  public:
    RefreshTableContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetNamespacePropertiesContext : public StatementContext {
  public:
    SetNamespacePropertiesContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    TheNamespaceContext *theNamespace();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *SET();
    TablePropertyListContext *tablePropertyList();
    antlr4::tree::TerminalNode *DBPROPERTIES();
    antlr4::tree::TerminalNode *PROPERTIES();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ManageResourceContext : public StatementContext {
  public:
    ManageResourceContext(StatementContext *ctx);

    antlr4::Token *op = nullptr;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AnalyzeContext : public StatementContext {
  public:
    AnalyzeContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *COMPUTE();
    antlr4::tree::TerminalNode *STATISTICS();
    PartitionSpecContext *partitionSpec();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *COLUMNS();
    IdentifierSeqContext *identifierSeq();
    antlr4::tree::TerminalNode *ALL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateHiveTableContext : public StatementContext {
  public:
    CreateHiveTableContext(StatementContext *ctx);

    fugue_sqlParser::ColTypeListContext *columns = nullptr;
    fugue_sqlParser::ColTypeListContext *partitionColumns = nullptr;
    fugue_sqlParser::IdentifierListContext *partitionColumnNames = nullptr;
    fugue_sqlParser::TablePropertyListContext *tableProps = nullptr;
    CreateTableHeaderContext *createTableHeader();
    std::vector<CommentSpecContext *> commentSpec();
    CommentSpecContext* commentSpec(size_t i);
    std::vector<BucketSpecContext *> bucketSpec();
    BucketSpecContext* bucketSpec(size_t i);
    std::vector<SkewSpecContext *> skewSpec();
    SkewSpecContext* skewSpec(size_t i);
    std::vector<RowFormatContext *> rowFormat();
    RowFormatContext* rowFormat(size_t i);
    std::vector<CreateFileFormatContext *> createFileFormat();
    CreateFileFormatContext* createFileFormat(size_t i);
    std::vector<LocationSpecContext *> locationSpec();
    LocationSpecContext* locationSpec(size_t i);
    QueryContext *query();
    std::vector<ColTypeListContext *> colTypeList();
    ColTypeListContext* colTypeList(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PARTITIONED();
    antlr4::tree::TerminalNode* PARTITIONED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TBLPROPERTIES();
    antlr4::tree::TerminalNode* TBLPROPERTIES(size_t i);
    std::vector<IdentifierListContext *> identifierList();
    IdentifierListContext* identifierList(size_t i);
    std::vector<TablePropertyListContext *> tablePropertyList();
    TablePropertyListContext* tablePropertyList(size_t i);
    antlr4::tree::TerminalNode *AS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateFunctionContext : public StatementContext {
  public:
    CreateFunctionContext(StatementContext *ctx);

    antlr4::Token *className = nullptr;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *USING();
    std::vector<ResourceContext *> resource();
    ResourceContext* resource(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowTableContext : public StatementContext {
  public:
    ShowTableContext(StatementContext *ctx);

    fugue_sqlParser::MultipartIdentifierContext *ns = nullptr;
    antlr4::Token *pattern = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *STRING();
    PartitionSpecContext *partitionSpec();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();
    MultipartIdentifierContext *multipartIdentifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HiveReplaceColumnsContext : public StatementContext {
  public:
    HiveReplaceColumnsContext(StatementContext *ctx);

    fugue_sqlParser::MultipartIdentifierContext *table = nullptr;
    fugue_sqlParser::QualifiedColTypeWithPositionListContext *columns = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *COLUMNS();
    MultipartIdentifierContext *multipartIdentifier();
    QualifiedColTypeWithPositionListContext *qualifiedColTypeWithPositionList();
    PartitionSpecContext *partitionSpec();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CommentNamespaceContext : public StatementContext {
  public:
    CommentNamespaceContext(StatementContext *ctx);

    antlr4::Token *comment = nullptr;
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *ON();
    TheNamespaceContext *theNamespace();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *THENULL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateTableContext : public StatementContext {
  public:
    CreateTableContext(StatementContext *ctx);

    CreateTableHeaderContext *createTableHeader();
    TableProviderContext *tableProvider();
    CreateTableClausesContext *createTableClauses();
    ColTypeListContext *colTypeList();
    QueryContext *query();
    antlr4::tree::TerminalNode *AS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DmlStatementContext : public StatementContext {
  public:
    DmlStatementContext(StatementContext *ctx);

    DmlStatementNoWithContext *dmlStatementNoWith();
    CtesContext *ctes();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateTableLikeContext : public StatementContext {
  public:
    CreateTableLikeContext(StatementContext *ctx);

    fugue_sqlParser::TableIdentifierContext *target = nullptr;
    fugue_sqlParser::TableIdentifierContext *source = nullptr;
    fugue_sqlParser::TablePropertyListContext *tableProps = nullptr;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *LIKE();
    std::vector<TableIdentifierContext *> tableIdentifier();
    TableIdentifierContext* tableIdentifier(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<TableProviderContext *> tableProvider();
    TableProviderContext* tableProvider(size_t i);
    std::vector<RowFormatContext *> rowFormat();
    RowFormatContext* rowFormat(size_t i);
    std::vector<CreateFileFormatContext *> createFileFormat();
    CreateFileFormatContext* createFileFormat(size_t i);
    std::vector<LocationSpecContext *> locationSpec();
    LocationSpecContext* locationSpec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TBLPROPERTIES();
    antlr4::tree::TerminalNode* TBLPROPERTIES(size_t i);
    std::vector<TablePropertyListContext *> tablePropertyList();
    TablePropertyListContext* tablePropertyList(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UncacheTableContext : public StatementContext {
  public:
    UncacheTableContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *UNCACHE();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DropFunctionContext : public StatementContext {
  public:
    DropFunctionContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FUNCTION();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DescribeRelationContext : public StatementContext {
  public:
    DescribeRelationContext(StatementContext *ctx);

    antlr4::Token *option = nullptr;
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *TABLE();
    PartitionSpecContext *partitionSpec();
    DescribeColNameContext *describeColName();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *FORMATTED();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LoadDataContext : public StatementContext {
  public:
    LoadDataContext(StatementContext *ctx);

    antlr4::Token *path = nullptr;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *INPATH();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *OVERWRITE();
    PartitionSpecContext *partitionSpec();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowPartitionsContext : public StatementContext {
  public:
    ShowPartitionsContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PARTITIONS();
    MultipartIdentifierContext *multipartIdentifier();
    PartitionSpecContext *partitionSpec();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DescribeFunctionContext : public StatementContext {
  public:
    DescribeFunctionContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *FUNCTION();
    DescribeFuncNameContext *describeFuncName();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *EXTENDED();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RenameTableColumnContext : public StatementContext {
  public:
    RenameTableColumnContext(StatementContext *ctx);

    fugue_sqlParser::MultipartIdentifierContext *table = nullptr;
    fugue_sqlParser::MultipartIdentifierContext *ifrom = nullptr;
    fugue_sqlParser::ErrorCapturingIdentifierContext *to = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *TO();
    std::vector<MultipartIdentifierContext *> multipartIdentifier();
    MultipartIdentifierContext* multipartIdentifier(size_t i);
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatementDefaultContext : public StatementContext {
  public:
    StatementDefaultContext(StatementContext *ctx);

    QueryContext *query();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HiveChangeColumnContext : public StatementContext {
  public:
    HiveChangeColumnContext(StatementContext *ctx);

    fugue_sqlParser::MultipartIdentifierContext *table = nullptr;
    fugue_sqlParser::MultipartIdentifierContext *colName = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *CHANGE();
    ColTypeContext *colType();
    std::vector<MultipartIdentifierContext *> multipartIdentifier();
    MultipartIdentifierContext* multipartIdentifier(size_t i);
    PartitionSpecContext *partitionSpec();
    antlr4::tree::TerminalNode *COLUMN();
    ColPositionContext *colPosition();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DescribeQueryContext : public StatementContext {
  public:
    DescribeQueryContext(StatementContext *ctx);

    QueryContext *query();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *QUERY();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TruncateTableContext : public StatementContext {
  public:
    TruncateTableContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    PartitionSpecContext *partitionSpec();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetTableSerDeContext : public StatementContext {
  public:
    SetTableSerDeContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SERDE();
    antlr4::tree::TerminalNode *STRING();
    PartitionSpecContext *partitionSpec();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SERDEPROPERTIES();
    TablePropertyListContext *tablePropertyList();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateViewContext : public StatementContext {
  public:
    CreateViewContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VIEW();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *AS();
    QueryContext *query();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    IdentifierCommentListContext *identifierCommentList();
    std::vector<CommentSpecContext *> commentSpec();
    CommentSpecContext* commentSpec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PARTITIONED();
    antlr4::tree::TerminalNode* PARTITIONED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<IdentifierListContext *> identifierList();
    IdentifierListContext* identifierList(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TBLPROPERTIES();
    antlr4::tree::TerminalNode* TBLPROPERTIES(size_t i);
    std::vector<TablePropertyListContext *> tablePropertyList();
    TablePropertyListContext* tablePropertyList(size_t i);
    antlr4::tree::TerminalNode *GLOBAL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DropTablePartitionsContext : public StatementContext {
  public:
    DropTablePartitionsContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *DROP();
    std::vector<PartitionSpecContext *> partitionSpec();
    PartitionSpecContext* partitionSpec(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *PURGE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetConfigurationContext : public StatementContext {
  public:
    SetConfigurationContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *SET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DropTableContext : public StatementContext {
  public:
    DropTableContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *PURGE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DescribeNamespaceContext : public StatementContext {
  public:
    DescribeNamespaceContext(StatementContext *ctx);

    TheNamespaceContext *theNamespace();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *EXTENDED();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterTableAlterColumnContext : public StatementContext {
  public:
    AlterTableAlterColumnContext(StatementContext *ctx);

    fugue_sqlParser::MultipartIdentifierContext *table = nullptr;
    fugue_sqlParser::MultipartIdentifierContext *column = nullptr;
    std::vector<antlr4::tree::TerminalNode *> ALTER();
    antlr4::tree::TerminalNode* ALTER(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    std::vector<MultipartIdentifierContext *> multipartIdentifier();
    MultipartIdentifierContext* multipartIdentifier(size_t i);
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *COLUMN();
    AlterColumnActionContext *alterColumnAction();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CommentTableContext : public StatementContext {
  public:
    CommentTableContext(StatementContext *ctx);

    antlr4::Token *comment = nullptr;
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *THENULL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateNamespaceContext : public StatementContext {
  public:
    CreateNamespaceContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    TheNamespaceContext *theNamespace();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<CommentSpecContext *> commentSpec();
    CommentSpecContext* commentSpec(size_t i);
    std::vector<LocationSpecContext *> locationSpec();
    LocationSpecContext* locationSpec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<TablePropertyListContext *> tablePropertyList();
    TablePropertyListContext* tablePropertyList(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DBPROPERTIES();
    antlr4::tree::TerminalNode* DBPROPERTIES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PROPERTIES();
    antlr4::tree::TerminalNode* PROPERTIES(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowTblPropertiesContext : public StatementContext {
  public:
    ShowTblPropertiesContext(StatementContext *ctx);

    fugue_sqlParser::MultipartIdentifierContext *table = nullptr;
    fugue_sqlParser::TablePropertyKeyContext *key = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *TBLPROPERTIES();
    MultipartIdentifierContext *multipartIdentifier();
    TablePropertyKeyContext *tablePropertyKey();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnsetTablePropertiesContext : public StatementContext {
  public:
    UnsetTablePropertiesContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *UNSET();
    antlr4::tree::TerminalNode *TBLPROPERTIES();
    TablePropertyListContext *tablePropertyList();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetTableLocationContext : public StatementContext {
  public:
    SetTableLocationContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *SET();
    LocationSpecContext *locationSpec();
    PartitionSpecContext *partitionSpec();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DropTableColumnsContext : public StatementContext {
  public:
    DropTableColumnsContext(StatementContext *ctx);

    fugue_sqlParser::MultipartIdentifierListContext *columns = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *COLUMNS();
    MultipartIdentifierListContext *multipartIdentifierList();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowViewsContext : public StatementContext {
  public:
    ShowViewsContext(StatementContext *ctx);

    antlr4::Token *pattern = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *VIEWS();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LIKE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowFunctionsContext : public StatementContext {
  public:
    ShowFunctionsContext(StatementContext *ctx);

    antlr4::Token *pattern = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *FUNCTIONS();
    IdentifierContext *identifier();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CacheTableContext : public StatementContext {
  public:
    CacheTableContext(StatementContext *ctx);

    fugue_sqlParser::TablePropertyListContext *options = nullptr;
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *LAZY();
    antlr4::tree::TerminalNode *OPTIONS();
    QueryContext *query();
    TablePropertyListContext *tablePropertyList();
    antlr4::tree::TerminalNode *AS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddTableColumnsContext : public StatementContext {
  public:
    AddTableColumnsContext(StatementContext *ctx);

    fugue_sqlParser::QualifiedColTypeWithPositionListContext *columns = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *COLUMNS();
    QualifiedColTypeWithPositionListContext *qualifiedColTypeWithPositionList();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetTablePropertiesContext : public StatementContext {
  public:
    SetTablePropertiesContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *TBLPROPERTIES();
    TablePropertyListContext *tablePropertyList();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *VIEW();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  UnsupportedHiveNativeCommandsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *kw1 = nullptr;
    antlr4::Token *kw2 = nullptr;
    antlr4::Token *kw3 = nullptr;
    antlr4::Token *kw4 = nullptr;
    antlr4::Token *kw5 = nullptr;
    antlr4::Token *kw6 = nullptr;
    UnsupportedHiveNativeCommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PRINCIPALS();
    antlr4::tree::TerminalNode *ROLES();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *COMPACTIONS();
    antlr4::tree::TerminalNode *TRANSACTIONS();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *MACRO();
    TableIdentifierContext *tableIdentifier();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *CLUSTERED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *SORTED();
    antlr4::tree::TerminalNode *SKEWED();
    antlr4::tree::TerminalNode *STORED();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *DIRECTORIES();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *ARCHIVE();
    antlr4::tree::TerminalNode *UNARCHIVE();
    antlr4::tree::TerminalNode *TOUCH();
    antlr4::tree::TerminalNode *COMPACT();
    PartitionSpecContext *partitionSpec();
    antlr4::tree::TerminalNode *CONCATENATE();
    antlr4::tree::TerminalNode *FILEFORMAT();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *DFS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnsupportedHiveNativeCommandsContext* unsupportedHiveNativeCommands();

  class  CreateTableHeaderContext : public antlr4::ParserRuleContext {
  public:
    CreateTableHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableHeaderContext* createTableHeader();

  class  ReplaceTableHeaderContext : public antlr4::ParserRuleContext {
  public:
    ReplaceTableHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *OR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplaceTableHeaderContext* replaceTableHeader();

  class  BucketSpecContext : public antlr4::ParserRuleContext {
  public:
    BucketSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLUSTERED();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    antlr4::tree::TerminalNode *BUCKETS();
    antlr4::tree::TerminalNode *SORTED();
    OrderedIdentifierListContext *orderedIdentifierList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BucketSpecContext* bucketSpec();

  class  SkewSpecContext : public antlr4::ParserRuleContext {
  public:
    SkewSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SKEWED();
    antlr4::tree::TerminalNode *BY();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *ON();
    ConstantListContext *constantList();
    NestedConstantListContext *nestedConstantList();
    antlr4::tree::TerminalNode *STORED();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *DIRECTORIES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SkewSpecContext* skewSpec();

  class  LocationSpecContext : public antlr4::ParserRuleContext {
  public:
    LocationSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocationSpecContext* locationSpec();

  class  CommentSpecContext : public antlr4::ParserRuleContext {
  public:
    CommentSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentSpecContext* commentSpec();

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryTermContext *queryTerm();
    QueryOrganizationContext *queryOrganization();
    FugueSqlEngineContext *fugueSqlEngine();
    CtesContext *ctes();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();

  class  InsertIntoContext : public antlr4::ParserRuleContext {
  public:
    InsertIntoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InsertIntoContext() = default;
    void copyFrom(InsertIntoContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InsertOverwriteHiveDirContext : public InsertIntoContext {
  public:
    InsertOverwriteHiveDirContext(InsertIntoContext *ctx);

    antlr4::Token *path = nullptr;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *OVERWRITE();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LOCAL();
    RowFormatContext *rowFormat();
    CreateFileFormatContext *createFileFormat();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InsertOverwriteDirContext : public InsertIntoContext {
  public:
    InsertOverwriteDirContext(InsertIntoContext *ctx);

    antlr4::Token *path = nullptr;
    fugue_sqlParser::TablePropertyListContext *options = nullptr;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *OVERWRITE();
    antlr4::tree::TerminalNode *DIRECTORY();
    TableProviderContext *tableProvider();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *STRING();
    TablePropertyListContext *tablePropertyList();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InsertOverwriteTableContext : public InsertIntoContext {
  public:
    InsertOverwriteTableContext(InsertIntoContext *ctx);

    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *OVERWRITE();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *TABLE();
    PartitionSpecContext *partitionSpec();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InsertIntoTableContext : public InsertIntoContext {
  public:
    InsertIntoTableContext(InsertIntoContext *ctx);

    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTO();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *TABLE();
    PartitionSpecContext *partitionSpec();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InsertIntoContext* insertInto();

  class  PartitionSpecLocationContext : public antlr4::ParserRuleContext {
  public:
    PartitionSpecLocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PartitionSpecContext *partitionSpec();
    LocationSpecContext *locationSpec();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionSpecLocationContext* partitionSpecLocation();

  class  PartitionSpecContext : public antlr4::ParserRuleContext {
  public:
    PartitionSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<PartitionValContext *> partitionVal();
    PartitionValContext* partitionVal(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionSpecContext* partitionSpec();

  class  PartitionValContext : public antlr4::ParserRuleContext {
  public:
    PartitionValContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUAL();
    ConstantContext *constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionValContext* partitionVal();

  class  TheNamespaceContext : public antlr4::ParserRuleContext {
  public:
    TheNamespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheNamespaceContext* theNamespace();

  class  DescribeFuncNameContext : public antlr4::ParserRuleContext {
  public:
    DescribeFuncNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedNameContext *qualifiedName();
    antlr4::tree::TerminalNode *STRING();
    ComparisonOperatorContext *comparisonOperator();
    ArithmeticOperatorContext *arithmeticOperator();
    PredicateOperatorContext *predicateOperator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescribeFuncNameContext* describeFuncName();

  class  DescribeColNameContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::IdentifierContext *identifierContext = nullptr;
    std::vector<IdentifierContext *> nameParts;
    DescribeColNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescribeColNameContext* describeColName();

  class  CtesContext : public antlr4::ParserRuleContext {
  public:
    CtesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<NamedQueryContext *> namedQuery();
    NamedQueryContext* namedQuery(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CtesContext* ctes();

  class  NamedQueryContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::ErrorCapturingIdentifierContext *name = nullptr;
    fugue_sqlParser::IdentifierListContext *columnAliases = nullptr;
    NamedQueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryContext *query();
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();
    antlr4::tree::TerminalNode *AS();
    IdentifierListContext *identifierList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedQueryContext* namedQuery();

  class  TableProviderContext : public antlr4::ParserRuleContext {
  public:
    TableProviderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    MultipartIdentifierContext *multipartIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableProviderContext* tableProvider();

  class  CreateTableClausesContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::TablePropertyListContext *options = nullptr;
    fugue_sqlParser::TransformListContext *partitioning = nullptr;
    fugue_sqlParser::TablePropertyListContext *tableProps = nullptr;
    CreateTableClausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BucketSpecContext *> bucketSpec();
    BucketSpecContext* bucketSpec(size_t i);
    std::vector<LocationSpecContext *> locationSpec();
    LocationSpecContext* locationSpec(size_t i);
    std::vector<CommentSpecContext *> commentSpec();
    CommentSpecContext* commentSpec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPTIONS();
    antlr4::tree::TerminalNode* OPTIONS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PARTITIONED();
    antlr4::tree::TerminalNode* PARTITIONED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TBLPROPERTIES();
    antlr4::tree::TerminalNode* TBLPROPERTIES(size_t i);
    std::vector<TablePropertyListContext *> tablePropertyList();
    TablePropertyListContext* tablePropertyList(size_t i);
    std::vector<TransformListContext *> transformList();
    TransformListContext* transformList(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableClausesContext* createTableClauses();

  class  TablePropertyListContext : public antlr4::ParserRuleContext {
  public:
    TablePropertyListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TablePropertyContext *> tableProperty();
    TablePropertyContext* tableProperty(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablePropertyListContext* tablePropertyList();

  class  TablePropertyContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::TablePropertyKeyContext *key = nullptr;
    fugue_sqlParser::TablePropertyValueContext *value = nullptr;
    TablePropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TablePropertyKeyContext *tablePropertyKey();
    TablePropertyValueContext *tablePropertyValue();
    antlr4::tree::TerminalNode *EQUAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablePropertyContext* tableProperty();

  class  TablePropertyKeyContext : public antlr4::ParserRuleContext {
  public:
    TablePropertyKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablePropertyKeyContext* tablePropertyKey();

  class  TablePropertyValueContext : public antlr4::ParserRuleContext {
  public:
    TablePropertyValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    antlr4::tree::TerminalNode *DECIMAL_VALUE();
    BooleanValueContext *booleanValue();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablePropertyValueContext* tablePropertyValue();

  class  ConstantListContext : public antlr4::ParserRuleContext {
  public:
    ConstantListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantListContext* constantList();

  class  NestedConstantListContext : public antlr4::ParserRuleContext {
  public:
    NestedConstantListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantListContext *> constantList();
    ConstantListContext* constantList(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedConstantListContext* nestedConstantList();

  class  CreateFileFormatContext : public antlr4::ParserRuleContext {
  public:
    CreateFileFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STORED();
    antlr4::tree::TerminalNode *AS();
    FileFormatContext *fileFormat();
    antlr4::tree::TerminalNode *BY();
    StorageHandlerContext *storageHandler();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateFileFormatContext* createFileFormat();

  class  FileFormatContext : public antlr4::ParserRuleContext {
  public:
    FileFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FileFormatContext() = default;
    void copyFrom(FileFormatContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableFileFormatContext : public FileFormatContext {
  public:
    TableFileFormatContext(FileFormatContext *ctx);

    antlr4::Token *inFmt = nullptr;
    antlr4::Token *outFmt = nullptr;
    antlr4::tree::TerminalNode *INPUTFORMAT();
    antlr4::tree::TerminalNode *OUTPUTFORMAT();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GenericFileFormatContext : public FileFormatContext {
  public:
    GenericFileFormatContext(FileFormatContext *ctx);

    IdentifierContext *identifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FileFormatContext* fileFormat();

  class  StorageHandlerContext : public antlr4::ParserRuleContext {
  public:
    StorageHandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SERDEPROPERTIES();
    TablePropertyListContext *tablePropertyList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StorageHandlerContext* storageHandler();

  class  ResourceContext : public antlr4::ParserRuleContext {
  public:
    ResourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceContext* resource();

  class  DmlStatementNoWithContext : public antlr4::ParserRuleContext {
  public:
    DmlStatementNoWithContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DmlStatementNoWithContext() = default;
    void copyFrom(DmlStatementNoWithContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeleteFromTableContext : public DmlStatementNoWithContext {
  public:
    DeleteFromTableContext(DmlStatementNoWithContext *ctx);

    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    MultipartIdentifierContext *multipartIdentifier();
    TableAliasContext *tableAlias();
    WhereClauseContext *whereClause();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SingleInsertQueryContext : public DmlStatementNoWithContext {
  public:
    SingleInsertQueryContext(DmlStatementNoWithContext *ctx);

    InsertIntoContext *insertInto();
    QueryTermContext *queryTerm();
    QueryOrganizationContext *queryOrganization();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiInsertQueryContext : public DmlStatementNoWithContext {
  public:
    MultiInsertQueryContext(DmlStatementNoWithContext *ctx);

    FromClauseContext *fromClause();
    std::vector<MultiInsertQueryBodyContext *> multiInsertQueryBody();
    MultiInsertQueryBodyContext* multiInsertQueryBody(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UpdateTableContext : public DmlStatementNoWithContext {
  public:
    UpdateTableContext(DmlStatementNoWithContext *ctx);

    antlr4::tree::TerminalNode *UPDATE();
    MultipartIdentifierContext *multipartIdentifier();
    TableAliasContext *tableAlias();
    SetClauseContext *setClause();
    WhereClauseContext *whereClause();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MergeIntoTableContext : public DmlStatementNoWithContext {
  public:
    MergeIntoTableContext(DmlStatementNoWithContext *ctx);

    fugue_sqlParser::MultipartIdentifierContext *target = nullptr;
    fugue_sqlParser::TableAliasContext *targetAlias = nullptr;
    fugue_sqlParser::MultipartIdentifierContext *source = nullptr;
    fugue_sqlParser::QueryContext *sourceQuery = nullptr;
    fugue_sqlParser::TableAliasContext *sourceAlias = nullptr;
    fugue_sqlParser::BooleanExpressionContext *mergeCondition = nullptr;
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *ON();
    std::vector<MultipartIdentifierContext *> multipartIdentifier();
    MultipartIdentifierContext* multipartIdentifier(size_t i);
    std::vector<TableAliasContext *> tableAlias();
    TableAliasContext* tableAlias(size_t i);
    BooleanExpressionContext *booleanExpression();
    QueryContext *query();
    std::vector<MatchedClauseContext *> matchedClause();
    MatchedClauseContext* matchedClause(size_t i);
    std::vector<NotMatchedClauseContext *> notMatchedClause();
    NotMatchedClauseContext* notMatchedClause(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DmlStatementNoWithContext* dmlStatementNoWith();

  class  QueryOrganizationContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::SortItemContext *sortItemContext = nullptr;
    std::vector<SortItemContext *> order;
    fugue_sqlParser::ExpressionContext *expressionContext = nullptr;
    std::vector<ExpressionContext *> clusterBy;
    std::vector<ExpressionContext *> distributeBy;
    std::vector<SortItemContext *> sort;
    fugue_sqlParser::ExpressionContext *limit = nullptr;
    QueryOrganizationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *SORT();
    WindowClauseContext *windowClause();
    antlr4::tree::TerminalNode *LIMIT();
    std::vector<SortItemContext *> sortItem();
    SortItemContext* sortItem(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ALL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryOrganizationContext* queryOrganization();

  class  MultiInsertQueryBodyContext : public antlr4::ParserRuleContext {
  public:
    MultiInsertQueryBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InsertIntoContext *insertInto();
    FromStatementBodyContext *fromStatementBody();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiInsertQueryBodyContext* multiInsertQueryBody();

  class  QueryTermContext : public antlr4::ParserRuleContext {
  public:
    QueryTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    QueryTermContext() = default;
    void copyFrom(QueryTermContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  QueryTermDefaultContext : public QueryTermContext {
  public:
    QueryTermDefaultContext(QueryTermContext *ctx);

    QueryPrimaryContext *queryPrimary();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FugueTermContext : public QueryTermContext {
  public:
    FugueTermContext(QueryTermContext *ctx);

    FugueNestableTaskCollectionNoSelectContext *fugueNestableTaskCollectionNoSelect();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetOperationContext : public QueryTermContext {
  public:
    SetOperationContext(QueryTermContext *ctx);

    fugue_sqlParser::QueryTermContext *left = nullptr;
    antlr4::Token *theOperator = nullptr;
    fugue_sqlParser::QueryTermContext *right = nullptr;
    std::vector<QueryTermContext *> queryTerm();
    QueryTermContext* queryTerm(size_t i);
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *SETMINUS();
    SetQuantifierContext *setQuantifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  QueryTermContext* queryTerm();
  QueryTermContext* queryTerm(int precedence);
  class  QueryPrimaryContext : public antlr4::ParserRuleContext {
  public:
    QueryPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    QueryPrimaryContext() = default;
    void copyFrom(QueryPrimaryContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  QueryPrimaryDefaultContext : public QueryPrimaryContext {
  public:
    QueryPrimaryDefaultContext(QueryPrimaryContext *ctx);

    QuerySpecificationContext *querySpecification();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineTableDefault1Context : public QueryPrimaryContext {
  public:
    InlineTableDefault1Context(QueryPrimaryContext *ctx);

    InlineTableContext *inlineTable();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FromStmtContext : public QueryPrimaryContext {
  public:
    FromStmtContext(QueryPrimaryContext *ctx);

    FromStatementContext *fromStatement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableContext : public QueryPrimaryContext {
  public:
    TableContext(QueryPrimaryContext *ctx);

    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  QueryPrimaryContext* queryPrimary();

  class  SortItemContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *ordering = nullptr;
    antlr4::Token *nullOrder = nullptr;
    SortItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THENULLS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *FIRST();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SortItemContext* sortItem();

  class  FromStatementContext : public antlr4::ParserRuleContext {
  public:
    FromStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FromClauseContext *fromClause();
    std::vector<FromStatementBodyContext *> fromStatementBody();
    FromStatementBodyContext* fromStatementBody(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromStatementContext* fromStatement();

  class  FromStatementBodyContext : public antlr4::ParserRuleContext {
  public:
    FromStatementBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TransformClauseContext *transformClause();
    QueryOrganizationContext *queryOrganization();
    WhereClauseContext *whereClause();
    SelectClauseContext *selectClause();
    std::vector<LateralViewContext *> lateralView();
    LateralViewContext* lateralView(size_t i);
    AggregationClauseContext *aggregationClause();
    HavingClauseContext *havingClause();
    WindowClauseContext *windowClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromStatementBodyContext* fromStatementBody();

  class  QuerySpecificationContext : public antlr4::ParserRuleContext {
  public:
    QuerySpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    QuerySpecificationContext() = default;
    void copyFrom(QuerySpecificationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RegularQuerySpecificationContext : public QuerySpecificationContext {
  public:
    RegularQuerySpecificationContext(QuerySpecificationContext *ctx);

    SelectClauseContext *selectClause();
    OptionalFromClauseContext *optionalFromClause();
    std::vector<LateralViewContext *> lateralView();
    LateralViewContext* lateralView(size_t i);
    WhereClauseContext *whereClause();
    AggregationClauseContext *aggregationClause();
    HavingClauseContext *havingClause();
    WindowClauseContext *windowClause();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TransformQuerySpecificationContext : public QuerySpecificationContext {
  public:
    TransformQuerySpecificationContext(QuerySpecificationContext *ctx);

    TransformClauseContext *transformClause();
    OptionalFromClauseContext *optionalFromClause();
    WhereClauseContext *whereClause();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  QuerySpecificationContext* querySpecification();

  class  OptionalFromClauseContext : public antlr4::ParserRuleContext {
  public:
    OptionalFromClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FromClauseContext *fromClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionalFromClauseContext* optionalFromClause();

  class  TransformClauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *kind = nullptr;
    fugue_sqlParser::RowFormatContext *inRowFormat = nullptr;
    antlr4::Token *recordWriter = nullptr;
    antlr4::Token *script = nullptr;
    fugue_sqlParser::RowFormatContext *outRowFormat = nullptr;
    antlr4::Token *recordReader = nullptr;
    TransformClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *SELECT();
    NamedExpressionSeqContext *namedExpressionSeq();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *REDUCE();
    antlr4::tree::TerminalNode *RECORDWRITER();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *RECORDREADER();
    std::vector<RowFormatContext *> rowFormat();
    RowFormatContext* rowFormat(size_t i);
    IdentifierSeqContext *identifierSeq();
    ColTypeListContext *colTypeList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransformClauseContext* transformClause();

  class  SelectClauseContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::HintContext *hintContext = nullptr;
    std::vector<HintContext *> hints;
    SelectClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    NamedExpressionSeqContext *namedExpressionSeq();
    SetQuantifierContext *setQuantifier();
    std::vector<HintContext *> hint();
    HintContext* hint(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectClauseContext* selectClause();

  class  SetClauseContext : public antlr4::ParserRuleContext {
  public:
    SetClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    AssignmentListContext *assignmentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetClauseContext* setClause();

  class  MatchedClauseContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::BooleanExpressionContext *matchedCond = nullptr;
    MatchedClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *THEN();
    MatchedActionContext *matchedAction();
    antlr4::tree::TerminalNode *AND();
    BooleanExpressionContext *booleanExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MatchedClauseContext* matchedClause();

  class  NotMatchedClauseContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::BooleanExpressionContext *notMatchedCond = nullptr;
    NotMatchedClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *THEN();
    NotMatchedActionContext *notMatchedAction();
    antlr4::tree::TerminalNode *AND();
    BooleanExpressionContext *booleanExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotMatchedClauseContext* notMatchedClause();

  class  MatchedActionContext : public antlr4::ParserRuleContext {
  public:
    MatchedActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *ASTERISK();
    AssignmentListContext *assignmentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MatchedActionContext* matchedAction();

  class  NotMatchedActionContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::MultipartIdentifierListContext *columns = nullptr;
    NotMatchedActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *VALUES();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    MultipartIdentifierListContext *multipartIdentifierList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotMatchedActionContext* notMatchedAction();

  class  AssignmentListContext : public antlr4::ParserRuleContext {
  public:
    AssignmentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentListContext* assignmentList();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::MultipartIdentifierContext *key = nullptr;
    fugue_sqlParser::ExpressionContext *value = nullptr;
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    MultipartIdentifierContext *multipartIdentifier();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  WhereClauseContext : public antlr4::ParserRuleContext {
  public:
    WhereClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    BooleanExpressionContext *booleanExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereClauseContext* whereClause();

  class  HavingClauseContext : public antlr4::ParserRuleContext {
  public:
    HavingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING();
    BooleanExpressionContext *booleanExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HavingClauseContext* havingClause();

  class  HintContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::HintStatementContext *hintStatementContext = nullptr;
    std::vector<HintStatementContext *> hintStatements;
    HintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HintStatementContext *> hintStatement();
    HintStatementContext* hintStatement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HintContext* hint();

  class  HintStatementContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::IdentifierContext *hintName = nullptr;
    fugue_sqlParser::PrimaryExpressionContext *primaryExpressionContext = nullptr;
    std::vector<PrimaryExpressionContext *> parameters;
    HintStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<PrimaryExpressionContext *> primaryExpression();
    PrimaryExpressionContext* primaryExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HintStatementContext* hintStatement();

  class  FromClauseContext : public antlr4::ParserRuleContext {
  public:
    FromClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    std::vector<RelationContext *> relation();
    RelationContext* relation(size_t i);
    std::vector<LateralViewContext *> lateralView();
    LateralViewContext* lateralView(size_t i);
    PivotClauseContext *pivotClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromClauseContext* fromClause();

  class  AggregationClauseContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::ExpressionContext *expressionContext = nullptr;
    std::vector<ExpressionContext *> groupingExpressions;
    antlr4::Token *kind = nullptr;
    AggregationClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SETS();
    std::vector<GroupingSetContext *> groupingSet();
    GroupingSetContext* groupingSet(size_t i);
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *CUBE();
    antlr4::tree::TerminalNode *GROUPING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AggregationClauseContext* aggregationClause();

  class  GroupingSetContext : public antlr4::ParserRuleContext {
  public:
    GroupingSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupingSetContext* groupingSet();

  class  PivotClauseContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::NamedExpressionSeqContext *aggregates = nullptr;
    fugue_sqlParser::PivotValueContext *pivotValueContext = nullptr;
    std::vector<PivotValueContext *> pivotValues;
    PivotClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PIVOT();
    antlr4::tree::TerminalNode *FOR();
    PivotColumnContext *pivotColumn();
    antlr4::tree::TerminalNode *IN();
    NamedExpressionSeqContext *namedExpressionSeq();
    std::vector<PivotValueContext *> pivotValue();
    PivotValueContext* pivotValue(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PivotClauseContext* pivotClause();

  class  PivotColumnContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::IdentifierContext *identifierContext = nullptr;
    std::vector<IdentifierContext *> identifiers;
    PivotColumnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PivotColumnContext* pivotColumn();

  class  PivotValueContext : public antlr4::ParserRuleContext {
  public:
    PivotValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PivotValueContext* pivotValue();

  class  LateralViewContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::IdentifierContext *tblName = nullptr;
    fugue_sqlParser::IdentifierContext *identifierContext = nullptr;
    std::vector<IdentifierContext *> colName;
    LateralViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *VIEW();
    QualifiedNameContext *qualifiedName();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *OUTER();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LateralViewContext* lateralView();

  class  SetQuantifierContext : public antlr4::ParserRuleContext {
  public:
    SetQuantifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *ALL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetQuantifierContext* setQuantifier();

  class  RelationContext : public antlr4::ParserRuleContext {
  public:
    RelationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationPrimaryContext *relationPrimary();
    std::vector<JoinRelationContext *> joinRelation();
    JoinRelationContext* joinRelation(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationContext* relation();

  class  JoinRelationContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::RelationPrimaryContext *right = nullptr;
    JoinRelationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JoinTypeContext *joinType();
    antlr4::tree::TerminalNode *JOIN();
    RelationPrimaryContext *relationPrimary();
    JoinCriteriaContext *joinCriteria();
    antlr4::tree::TerminalNode *NATURAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinRelationContext* joinRelation();

  class  JoinTypeContext : public antlr4::ParserRuleContext {
  public:
    JoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *ANTI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinTypeContext* joinType();

  class  JoinCriteriaContext : public antlr4::ParserRuleContext {
  public:
    JoinCriteriaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    BooleanExpressionContext *booleanExpression();
    antlr4::tree::TerminalNode *USING();
    IdentifierListContext *identifierList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinCriteriaContext* joinCriteria();

  class  SampleContext : public antlr4::ParserRuleContext {
  public:
    SampleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESAMPLE();
    SampleMethodContext *sampleMethod();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *BERNOULLI();
    antlr4::tree::TerminalNode *RESERVOIR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SampleContext* sample();

  class  SampleMethodContext : public antlr4::ParserRuleContext {
  public:
    SampleMethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SampleMethodContext() = default;
    void copyFrom(SampleMethodContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SampleByRowsContext : public SampleMethodContext {
  public:
    SampleByRowsContext(SampleMethodContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ROWS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SampleByPercentileContext : public SampleMethodContext {
  public:
    SampleByPercentileContext(SampleMethodContext *ctx);

    antlr4::Token *negativeSign = nullptr;
    antlr4::Token *percentage = nullptr;
    antlr4::tree::TerminalNode *PERCENTLIT();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    antlr4::tree::TerminalNode *DECIMAL_VALUE();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SampleByBucketContext : public SampleMethodContext {
  public:
    SampleByBucketContext(SampleMethodContext *ctx);

    antlr4::Token *sampleType = nullptr;
    antlr4::Token *numerator = nullptr;
    antlr4::Token *denominator = nullptr;
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *BUCKET();
    std::vector<antlr4::tree::TerminalNode *> INTEGER_VALUE();
    antlr4::tree::TerminalNode* INTEGER_VALUE(size_t i);
    antlr4::tree::TerminalNode *ON();
    IdentifierContext *identifier();
    QualifiedNameContext *qualifiedName();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SampleByBytesContext : public SampleMethodContext {
  public:
    SampleByBytesContext(SampleMethodContext *ctx);

    fugue_sqlParser::ExpressionContext *bytes = nullptr;
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SampleMethodContext* sampleMethod();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierSeqContext *identifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();

  class  IdentifierSeqContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::ErrorCapturingIdentifierContext *errorCapturingIdentifierContext = nullptr;
    std::vector<ErrorCapturingIdentifierContext *> ident;
    IdentifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ErrorCapturingIdentifierContext *> errorCapturingIdentifier();
    ErrorCapturingIdentifierContext* errorCapturingIdentifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierSeqContext* identifierSeq();

  class  OrderedIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    OrderedIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OrderedIdentifierContext *> orderedIdentifier();
    OrderedIdentifierContext* orderedIdentifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderedIdentifierListContext* orderedIdentifierList();

  class  OrderedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::ErrorCapturingIdentifierContext *ident = nullptr;
    antlr4::Token *ordering = nullptr;
    OrderedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderedIdentifierContext* orderedIdentifier();

  class  IdentifierCommentListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierCommentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierCommentContext *> identifierComment();
    IdentifierCommentContext* identifierComment(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierCommentListContext* identifierCommentList();

  class  IdentifierCommentContext : public antlr4::ParserRuleContext {
  public:
    IdentifierCommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    CommentSpecContext *commentSpec();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierCommentContext* identifierComment();

  class  RelationPrimaryContext : public antlr4::ParserRuleContext {
  public:
    RelationPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RelationPrimaryContext() = default;
    void copyFrom(RelationPrimaryContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableValuedFunctionContext : public RelationPrimaryContext {
  public:
    TableValuedFunctionContext(RelationPrimaryContext *ctx);

    FunctionTableContext *functionTable();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineTableDefault2Context : public RelationPrimaryContext {
  public:
    InlineTableDefault2Context(RelationPrimaryContext *ctx);

    InlineTableContext *inlineTable();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AliasedRelationContext : public RelationPrimaryContext {
  public:
    AliasedRelationContext(RelationPrimaryContext *ctx);

    RelationContext *relation();
    TableAliasContext *tableAlias();
    SampleContext *sample();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AliasedQueryContext : public RelationPrimaryContext {
  public:
    AliasedQueryContext(RelationPrimaryContext *ctx);

    QueryContext *query();
    TableAliasContext *tableAlias();
    SampleContext *sample();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableNameContext : public RelationPrimaryContext {
  public:
    TableNameContext(RelationPrimaryContext *ctx);

    MultipartIdentifierContext *multipartIdentifier();
    TableAliasContext *tableAlias();
    FugueDataFrameMemberContext *fugueDataFrameMember();
    SampleContext *sample();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RelationPrimaryContext* relationPrimary();

  class  InlineTableContext : public antlr4::ParserRuleContext {
  public:
    InlineTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    TableAliasContext *tableAlias();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InlineTableContext* inlineTable();

  class  FunctionTableContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::ErrorCapturingIdentifierContext *funcName = nullptr;
    FunctionTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableAliasContext *tableAlias();
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTableContext* functionTable();

  class  TableAliasContext : public antlr4::ParserRuleContext {
  public:
    TableAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StrictIdentifierContext *strictIdentifier();
    antlr4::tree::TerminalNode *AS();
    IdentifierListContext *identifierList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableAliasContext* tableAlias();

  class  RowFormatContext : public antlr4::ParserRuleContext {
  public:
    RowFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RowFormatContext() = default;
    void copyFrom(RowFormatContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RowFormatSerdeContext : public RowFormatContext {
  public:
    RowFormatSerdeContext(RowFormatContext *ctx);

    antlr4::Token *name = nullptr;
    fugue_sqlParser::TablePropertyListContext *props = nullptr;
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *SERDE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SERDEPROPERTIES();
    TablePropertyListContext *tablePropertyList();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RowFormatDelimitedContext : public RowFormatContext {
  public:
    RowFormatDelimitedContext(RowFormatContext *ctx);

    antlr4::Token *fieldsTerminatedBy = nullptr;
    antlr4::Token *escapedBy = nullptr;
    antlr4::Token *collectionItemsTerminatedBy = nullptr;
    antlr4::Token *keysTerminatedBy = nullptr;
    antlr4::Token *linesSeparatedBy = nullptr;
    antlr4::Token *nullDefinedAs = nullptr;
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *DELIMITED();
    antlr4::tree::TerminalNode *FIELDS();
    std::vector<antlr4::tree::TerminalNode *> TERMINATED();
    antlr4::tree::TerminalNode* TERMINATED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    antlr4::tree::TerminalNode *COLLECTION();
    antlr4::tree::TerminalNode *ITEMS();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *LINES();
    antlr4::tree::TerminalNode *THENULL();
    antlr4::tree::TerminalNode *DEFINED();
    antlr4::tree::TerminalNode *AS();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *ESCAPED();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RowFormatContext* rowFormat();

  class  MultipartIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    MultipartIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultipartIdentifierContext *> multipartIdentifier();
    MultipartIdentifierContext* multipartIdentifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultipartIdentifierListContext* multipartIdentifierList();

  class  MultipartIdentifierContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::ErrorCapturingIdentifierContext *errorCapturingIdentifierContext = nullptr;
    std::vector<ErrorCapturingIdentifierContext *> parts;
    MultipartIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ErrorCapturingIdentifierContext *> errorCapturingIdentifier();
    ErrorCapturingIdentifierContext* errorCapturingIdentifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultipartIdentifierContext* multipartIdentifier();

  class  TableIdentifierContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::ErrorCapturingIdentifierContext *db = nullptr;
    fugue_sqlParser::ErrorCapturingIdentifierContext *table = nullptr;
    TableIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ErrorCapturingIdentifierContext *> errorCapturingIdentifier();
    ErrorCapturingIdentifierContext* errorCapturingIdentifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableIdentifierContext* tableIdentifier();

  class  FunctionIdentifierContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::ErrorCapturingIdentifierContext *db = nullptr;
    fugue_sqlParser::ErrorCapturingIdentifierContext *function = nullptr;
    FunctionIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ErrorCapturingIdentifierContext *> errorCapturingIdentifier();
    ErrorCapturingIdentifierContext* errorCapturingIdentifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionIdentifierContext* functionIdentifier();

  class  NamedExpressionContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::ErrorCapturingIdentifierContext *name = nullptr;
    NamedExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *AS();
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedExpressionContext* namedExpression();

  class  NamedExpressionSeqContext : public antlr4::ParserRuleContext {
  public:
    NamedExpressionSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NamedExpressionContext *> namedExpression();
    NamedExpressionContext* namedExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedExpressionSeqContext* namedExpressionSeq();

  class  TransformListContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::TransformContext *transformContext = nullptr;
    std::vector<TransformContext *> transforms;
    TransformListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TransformContext *> transform();
    TransformContext* transform(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransformListContext* transformList();

  class  TransformContext : public antlr4::ParserRuleContext {
  public:
    TransformContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TransformContext() = default;
    void copyFrom(TransformContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IdentityTransformContext : public TransformContext {
  public:
    IdentityTransformContext(TransformContext *ctx);

    QualifiedNameContext *qualifiedName();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ApplyTransformContext : public TransformContext {
  public:
    ApplyTransformContext(TransformContext *ctx);

    fugue_sqlParser::IdentifierContext *transformName = nullptr;
    fugue_sqlParser::TransformArgumentContext *transformArgumentContext = nullptr;
    std::vector<TransformArgumentContext *> argument;
    IdentifierContext *identifier();
    std::vector<TransformArgumentContext *> transformArgument();
    TransformArgumentContext* transformArgument(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TransformContext* transform();

  class  TransformArgumentContext : public antlr4::ParserRuleContext {
  public:
    TransformArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedNameContext *qualifiedName();
    ConstantContext *constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransformArgumentContext* transformArgument();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BooleanExpressionContext *booleanExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  BooleanExpressionContext : public antlr4::ParserRuleContext {
  public:
    BooleanExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BooleanExpressionContext() = default;
    void copyFrom(BooleanExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LogicalNotContext : public BooleanExpressionContext {
  public:
    LogicalNotContext(BooleanExpressionContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    BooleanExpressionContext *booleanExpression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PredicatedContext : public BooleanExpressionContext {
  public:
    PredicatedContext(BooleanExpressionContext *ctx);

    ValueExpressionContext *valueExpression();
    PredicateContext *predicate();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExistsContext : public BooleanExpressionContext {
  public:
    ExistsContext(BooleanExpressionContext *ctx);

    antlr4::tree::TerminalNode *EXISTS();
    QueryContext *query();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalBinaryContext : public BooleanExpressionContext {
  public:
    LogicalBinaryContext(BooleanExpressionContext *ctx);

    fugue_sqlParser::BooleanExpressionContext *left = nullptr;
    antlr4::Token *theOperator = nullptr;
    fugue_sqlParser::BooleanExpressionContext *right = nullptr;
    std::vector<BooleanExpressionContext *> booleanExpression();
    BooleanExpressionContext* booleanExpression(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BooleanExpressionContext* booleanExpression();
  BooleanExpressionContext* booleanExpression(int precedence);
  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *kind = nullptr;
    fugue_sqlParser::ValueExpressionContext *lower = nullptr;
    fugue_sqlParser::ValueExpressionContext *upper = nullptr;
    fugue_sqlParser::ValueExpressionContext *pattern = nullptr;
    antlr4::Token *quantifier = nullptr;
    antlr4::Token *escapeChar = nullptr;
    fugue_sqlParser::ValueExpressionContext *right = nullptr;
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *BETWEEN();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    antlr4::tree::TerminalNode *NOT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *IN();
    QueryContext *query();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *THENULL();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *DISTINCT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateContext* predicate();

  class  ValueExpressionContext : public antlr4::ParserRuleContext {
  public:
    ValueExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ValueExpressionContext() = default;
    void copyFrom(ValueExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ValueExpressionDefaultContext : public ValueExpressionContext {
  public:
    ValueExpressionDefaultContext(ValueExpressionContext *ctx);

    PrimaryExpressionContext *primaryExpression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComparisonContext : public ValueExpressionContext {
  public:
    ComparisonContext(ValueExpressionContext *ctx);

    fugue_sqlParser::ValueExpressionContext *left = nullptr;
    fugue_sqlParser::ValueExpressionContext *right = nullptr;
    ComparisonOperatorContext *comparisonOperator();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticBinaryContext : public ValueExpressionContext {
  public:
    ArithmeticBinaryContext(ValueExpressionContext *ctx);

    fugue_sqlParser::ValueExpressionContext *left = nullptr;
    antlr4::Token *theOperator = nullptr;
    fugue_sqlParser::ValueExpressionContext *right = nullptr;
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *CONCAT_PIPE();
    antlr4::tree::TerminalNode *AMPERSAND();
    antlr4::tree::TerminalNode *HAT();
    antlr4::tree::TerminalNode *PIPE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticUnaryContext : public ValueExpressionContext {
  public:
    ArithmeticUnaryContext(ValueExpressionContext *ctx);

    antlr4::Token *theOperator = nullptr;
    ValueExpressionContext *valueExpression();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *TILDE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ValueExpressionContext* valueExpression();
  ValueExpressionContext* valueExpression(int precedence);
  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrimaryExpressionContext() = default;
    void copyFrom(PrimaryExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StructContext : public PrimaryExpressionContext {
  public:
    StructContext(PrimaryExpressionContext *ctx);

    fugue_sqlParser::NamedExpressionContext *namedExpressionContext = nullptr;
    std::vector<NamedExpressionContext *> argument;
    antlr4::tree::TerminalNode *STRUCT();
    std::vector<NamedExpressionContext *> namedExpression();
    NamedExpressionContext* namedExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DereferenceContext : public PrimaryExpressionContext {
  public:
    DereferenceContext(PrimaryExpressionContext *ctx);

    fugue_sqlParser::PrimaryExpressionContext *base = nullptr;
    fugue_sqlParser::IdentifierContext *fieldName = nullptr;
    PrimaryExpressionContext *primaryExpression();
    IdentifierContext *identifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleCaseContext : public PrimaryExpressionContext {
  public:
    SimpleCaseContext(PrimaryExpressionContext *ctx);

    fugue_sqlParser::ExpressionContext *value = nullptr;
    fugue_sqlParser::ExpressionContext *elseExpression = nullptr;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<WhenClauseContext *> whenClause();
    WhenClauseContext* whenClause(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnReferenceContext : public PrimaryExpressionContext {
  public:
    ColumnReferenceContext(PrimaryExpressionContext *ctx);

    IdentifierContext *identifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RowConstructorContext : public PrimaryExpressionContext {
  public:
    RowConstructorContext(PrimaryExpressionContext *ctx);

    std::vector<NamedExpressionContext *> namedExpression();
    NamedExpressionContext* namedExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LastContext : public PrimaryExpressionContext {
  public:
    LastContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *LAST();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *THENULLS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StarContext : public PrimaryExpressionContext {
  public:
    StarContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *ASTERISK();
    QualifiedNameContext *qualifiedName();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverlayContext : public PrimaryExpressionContext {
  public:
    OverlayContext(PrimaryExpressionContext *ctx);

    fugue_sqlParser::ValueExpressionContext *iinput = nullptr;
    fugue_sqlParser::ValueExpressionContext *replace = nullptr;
    fugue_sqlParser::ValueExpressionContext *position = nullptr;
    fugue_sqlParser::ValueExpressionContext *length = nullptr;
    antlr4::tree::TerminalNode *OVERLAY();
    antlr4::tree::TerminalNode *PLACING();
    antlr4::tree::TerminalNode *FROM();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    antlr4::tree::TerminalNode *FOR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubscriptContext : public PrimaryExpressionContext {
  public:
    SubscriptContext(PrimaryExpressionContext *ctx);

    fugue_sqlParser::PrimaryExpressionContext *value = nullptr;
    fugue_sqlParser::ValueExpressionContext *index = nullptr;
    PrimaryExpressionContext *primaryExpression();
    ValueExpressionContext *valueExpression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubqueryExpressionContext : public PrimaryExpressionContext {
  public:
    SubqueryExpressionContext(PrimaryExpressionContext *ctx);

    QueryContext *query();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubstringContext : public PrimaryExpressionContext {
  public:
    SubstringContext(PrimaryExpressionContext *ctx);

    fugue_sqlParser::ValueExpressionContext *istr = nullptr;
    fugue_sqlParser::ValueExpressionContext *pos = nullptr;
    fugue_sqlParser::ValueExpressionContext *ilen = nullptr;
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *FOR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CurrentDatetimeContext : public PrimaryExpressionContext {
  public:
    CurrentDatetimeContext(PrimaryExpressionContext *ctx);

    antlr4::Token *name = nullptr;
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CastContext : public PrimaryExpressionContext {
  public:
    CastContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *CAST();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AS();
    DataTypeContext *dataType();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstantDefaultContext : public PrimaryExpressionContext {
  public:
    ConstantDefaultContext(PrimaryExpressionContext *ctx);

    ConstantContext *constant();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LambdaContext : public PrimaryExpressionContext {
  public:
    LambdaContext(PrimaryExpressionContext *ctx);

    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesizedExpressionContext : public PrimaryExpressionContext {
  public:
    ParenthesizedExpressionContext(PrimaryExpressionContext *ctx);

    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExtractContext : public PrimaryExpressionContext {
  public:
    ExtractContext(PrimaryExpressionContext *ctx);

    fugue_sqlParser::IdentifierContext *field = nullptr;
    fugue_sqlParser::ValueExpressionContext *source = nullptr;
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *FROM();
    IdentifierContext *identifier();
    ValueExpressionContext *valueExpression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TrimContext : public PrimaryExpressionContext {
  public:
    TrimContext(PrimaryExpressionContext *ctx);

    antlr4::Token *trimOption = nullptr;
    fugue_sqlParser::ValueExpressionContext *trimStr = nullptr;
    fugue_sqlParser::ValueExpressionContext *srcStr = nullptr;
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *FROM();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *TRAILING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallContext : public PrimaryExpressionContext {
  public:
    FunctionCallContext(PrimaryExpressionContext *ctx);

    fugue_sqlParser::ExpressionContext *expressionContext = nullptr;
    std::vector<ExpressionContext *> argument;
    fugue_sqlParser::BooleanExpressionContext *where = nullptr;
    FunctionNameContext *functionName();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *OVER();
    WindowSpecContext *windowSpec();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    BooleanExpressionContext *booleanExpression();
    SetQuantifierContext *setQuantifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SearchedCaseContext : public PrimaryExpressionContext {
  public:
    SearchedCaseContext(PrimaryExpressionContext *ctx);

    fugue_sqlParser::ExpressionContext *elseExpression = nullptr;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    std::vector<WhenClauseContext *> whenClause();
    WhenClauseContext* whenClause(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PositionContext : public PrimaryExpressionContext {
  public:
    PositionContext(PrimaryExpressionContext *ctx);

    fugue_sqlParser::ValueExpressionContext *substr = nullptr;
    fugue_sqlParser::ValueExpressionContext *istr = nullptr;
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *IN();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FirstContext : public PrimaryExpressionContext {
  public:
    FirstContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *FIRST();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *THENULLS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PrimaryExpressionContext* primaryExpression();
  PrimaryExpressionContext* primaryExpression(int precedence);
  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConstantContext() = default;
    void copyFrom(ConstantContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NullLiteralContext : public ConstantContext {
  public:
    NullLiteralContext(ConstantContext *ctx);

    antlr4::tree::TerminalNode *THENULL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringLiteralContext : public ConstantContext {
  public:
    StringLiteralContext(ConstantContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeConstructorContext : public ConstantContext {
  public:
    TypeConstructorContext(ConstantContext *ctx);

    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntervalLiteralContext : public ConstantContext {
  public:
    IntervalLiteralContext(ConstantContext *ctx);

    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumericLiteralContext : public ConstantContext {
  public:
    NumericLiteralContext(ConstantContext *ctx);

    NumberContext *number();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanLiteralContext : public ConstantContext {
  public:
    BooleanLiteralContext(ConstantContext *ctx);

    BooleanValueContext *booleanValue();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConstantContext* constant();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComparisonEqualOperatorContext *comparisonEqualOperator();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *NEQJ();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTE();
    antlr4::tree::TerminalNode *NSEQ();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  ComparisonEqualOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonEqualOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOUBLEEQUAL();
    antlr4::tree::TerminalNode *EQUAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonEqualOperatorContext* comparisonEqualOperator();

  class  ArithmeticOperatorContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *AMPERSAND();
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *CONCAT_PIPE();
    antlr4::tree::TerminalNode *HAT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArithmeticOperatorContext* arithmeticOperator();

  class  PredicateOperatorContext : public antlr4::ParserRuleContext {
  public:
    PredicateOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateOperatorContext* predicateOperator();

  class  BooleanValueContext : public antlr4::ParserRuleContext {
  public:
    BooleanValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanValueContext* booleanValue();

  class  IntervalContext : public antlr4::ParserRuleContext {
  public:
    IntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERVAL();
    ErrorCapturingMultiUnitsIntervalContext *errorCapturingMultiUnitsInterval();
    ErrorCapturingUnitToUnitIntervalContext *errorCapturingUnitToUnitInterval();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalContext* interval();

  class  ErrorCapturingMultiUnitsIntervalContext : public antlr4::ParserRuleContext {
  public:
    ErrorCapturingMultiUnitsIntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiUnitsIntervalContext *multiUnitsInterval();
    UnitToUnitIntervalContext *unitToUnitInterval();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ErrorCapturingMultiUnitsIntervalContext* errorCapturingMultiUnitsInterval();

  class  MultiUnitsIntervalContext : public antlr4::ParserRuleContext {
  public:
    MultiUnitsIntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IntervalValueContext *> intervalValue();
    IntervalValueContext* intervalValue(size_t i);
    std::vector<IntervalUnitContext *> intervalUnit();
    IntervalUnitContext* intervalUnit(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiUnitsIntervalContext* multiUnitsInterval();

  class  ErrorCapturingUnitToUnitIntervalContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::UnitToUnitIntervalContext *body = nullptr;
    fugue_sqlParser::MultiUnitsIntervalContext *error1 = nullptr;
    fugue_sqlParser::UnitToUnitIntervalContext *error2 = nullptr;
    ErrorCapturingUnitToUnitIntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnitToUnitIntervalContext *> unitToUnitInterval();
    UnitToUnitIntervalContext* unitToUnitInterval(size_t i);
    MultiUnitsIntervalContext *multiUnitsInterval();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ErrorCapturingUnitToUnitIntervalContext* errorCapturingUnitToUnitInterval();

  class  UnitToUnitIntervalContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::IntervalValueContext *value = nullptr;
    fugue_sqlParser::IntervalUnitContext *ifrom = nullptr;
    fugue_sqlParser::IntervalUnitContext *to = nullptr;
    UnitToUnitIntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    IntervalValueContext *intervalValue();
    std::vector<IntervalUnitContext *> intervalUnit();
    IntervalUnitContext* intervalUnit(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnitToUnitIntervalContext* unitToUnitInterval();

  class  IntervalValueContext : public antlr4::ParserRuleContext {
  public:
    IntervalValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    antlr4::tree::TerminalNode *DECIMAL_VALUE();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalValueContext* intervalValue();

  class  IntervalUnitContext : public antlr4::ParserRuleContext {
  public:
    IntervalUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *YEAR();
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalUnitContext* intervalUnit();

  class  ColPositionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *position = nullptr;
    fugue_sqlParser::ErrorCapturingIdentifierContext *afterCol = nullptr;
    ColPositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColPositionContext* colPosition();

  class  DataTypeContext : public antlr4::ParserRuleContext {
  public:
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DataTypeContext() = default;
    void copyFrom(DataTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ComplexDataTypeContext : public DataTypeContext {
  public:
    ComplexDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *icomplex = nullptr;
    antlr4::tree::TerminalNode *LT();
    std::vector<DataTypeContext *> dataType();
    DataTypeContext* dataType(size_t i);
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *NEQ();
    ComplexColTypeListContext *complexColTypeList();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrimitiveDataTypeContext : public DataTypeContext {
  public:
    PrimitiveDataTypeContext(DataTypeContext *ctx);

    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> INTEGER_VALUE();
    antlr4::tree::TerminalNode* INTEGER_VALUE(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DataTypeContext* dataType();

  class  QualifiedColTypeWithPositionListContext : public antlr4::ParserRuleContext {
  public:
    QualifiedColTypeWithPositionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QualifiedColTypeWithPositionContext *> qualifiedColTypeWithPosition();
    QualifiedColTypeWithPositionContext* qualifiedColTypeWithPosition(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedColTypeWithPositionListContext* qualifiedColTypeWithPositionList();

  class  QualifiedColTypeWithPositionContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::MultipartIdentifierContext *name = nullptr;
    QualifiedColTypeWithPositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *THENULL();
    CommentSpecContext *commentSpec();
    ColPositionContext *colPosition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedColTypeWithPositionContext* qualifiedColTypeWithPosition();

  class  ColTypeListContext : public antlr4::ParserRuleContext {
  public:
    ColTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColTypeContext *> colType();
    ColTypeContext* colType(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColTypeListContext* colTypeList();

  class  ColTypeContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::ErrorCapturingIdentifierContext *colName = nullptr;
    ColTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *THENULL();
    CommentSpecContext *commentSpec();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColTypeContext* colType();

  class  ComplexColTypeListContext : public antlr4::ParserRuleContext {
  public:
    ComplexColTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComplexColTypeContext *> complexColType();
    ComplexColTypeContext* complexColType(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComplexColTypeListContext* complexColTypeList();

  class  ComplexColTypeContext : public antlr4::ParserRuleContext {
  public:
    ComplexColTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *THENULL();
    CommentSpecContext *commentSpec();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComplexColTypeContext* complexColType();

  class  WhenClauseContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::ExpressionContext *condition = nullptr;
    fugue_sqlParser::ExpressionContext *result = nullptr;
    WhenClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenClauseContext* whenClause();

  class  WindowClauseContext : public antlr4::ParserRuleContext {
  public:
    WindowClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WINDOW();
    std::vector<NamedWindowContext *> namedWindow();
    NamedWindowContext* namedWindow(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowClauseContext* windowClause();

  class  NamedWindowContext : public antlr4::ParserRuleContext {
  public:
    fugue_sqlParser::ErrorCapturingIdentifierContext *name = nullptr;
    NamedWindowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    WindowSpecContext *windowSpec();
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedWindowContext* namedWindow();

  class  WindowSpecContext : public antlr4::ParserRuleContext {
  public:
    WindowSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    WindowSpecContext() = default;
    void copyFrom(WindowSpecContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WindowRefContext : public WindowSpecContext {
  public:
    WindowRefContext(WindowSpecContext *ctx);

    fugue_sqlParser::ErrorCapturingIdentifierContext *name = nullptr;
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WindowDefContext : public WindowSpecContext {
  public:
    WindowDefContext(WindowSpecContext *ctx);

    fugue_sqlParser::ExpressionContext *expressionContext = nullptr;
    std::vector<ExpressionContext *> partition;
    antlr4::tree::TerminalNode *CLUSTER();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    WindowFrameContext *windowFrame();
    std::vector<SortItemContext *> sortItem();
    SortItemContext* sortItem(size_t i);
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *SORT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  WindowSpecContext* windowSpec();

  class  WindowFrameContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *frameType = nullptr;
    fugue_sqlParser::FrameBoundContext *start = nullptr;
    fugue_sqlParser::FrameBoundContext *end = nullptr;
    WindowFrameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANGE();
    std::vector<FrameBoundContext *> frameBound();
    FrameBoundContext* frameBound(size_t i);
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameContext* windowFrame();

  class  FrameBoundContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *boundType = nullptr;
    FrameBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *CURRENT();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FrameBoundContext* frameBound();

  class  QualifiedNameListContext : public antlr4::ParserRuleContext {
  public:
    QualifiedNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QualifiedNameContext *> qualifiedName();
    QualifiedNameContext* qualifiedName(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedNameListContext* qualifiedNameList();

  class  FunctionNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedNameContext *qualifiedName();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionNameContext* functionName();

  class  QualifiedNameContext : public antlr4::ParserRuleContext {
  public:
    QualifiedNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedNameContext* qualifiedName();

  class  ErrorCapturingIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ErrorCapturingIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ErrorCapturingIdentifierContext* errorCapturingIdentifier();

  class  ErrorCapturingIdentifierExtraContext : public antlr4::ParserRuleContext {
  public:
    ErrorCapturingIdentifierExtraContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ErrorCapturingIdentifierExtraContext() = default;
    void copyFrom(ErrorCapturingIdentifierExtraContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ErrorIdentContext : public ErrorCapturingIdentifierExtraContext {
  public:
    ErrorIdentContext(ErrorCapturingIdentifierExtraContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ErrorCapturingIdentifierExtraContext* errorCapturingIdentifierExtra();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StrictIdentifierContext *strictIdentifier();
    StrictNonReservedContext *strictNonReserved();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  StrictIdentifierContext : public antlr4::ParserRuleContext {
  public:
    StrictIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StrictIdentifierContext() = default;
    void copyFrom(StrictIdentifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  QuotedIdentifierAlternativeContext : public StrictIdentifierContext {
  public:
    QuotedIdentifierAlternativeContext(StrictIdentifierContext *ctx);

    QuotedIdentifierContext *quotedIdentifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnquotedIdentifierContext : public StrictIdentifierContext {
  public:
    UnquotedIdentifierContext(StrictIdentifierContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    NonReservedContext *nonReserved();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StrictIdentifierContext* strictIdentifier();

  class  QuotedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    QuotedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BACKQUOTED_IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuotedIdentifierContext* quotedIdentifier();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumberContext() = default;
    void copyFrom(NumberContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DecimalLiteralContext : public NumberContext {
  public:
    DecimalLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *DECIMAL_VALUE();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BigIntLiteralContext : public NumberContext {
  public:
    BigIntLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *BIGINT_LITERAL();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TinyIntLiteralContext : public NumberContext {
  public:
    TinyIntLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *TINYINT_LITERAL();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LegacyDecimalLiteralContext : public NumberContext {
  public:
    LegacyDecimalLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *EXPONENT_VALUE();
    antlr4::tree::TerminalNode *DECIMAL_VALUE();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BigDecimalLiteralContext : public NumberContext {
  public:
    BigDecimalLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *BIGDECIMAL_LITERAL();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExponentLiteralContext : public NumberContext {
  public:
    ExponentLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *EXPONENT_VALUE();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DoubleLiteralContext : public NumberContext {
  public:
    DoubleLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *DOUBLE_LITERAL();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerLiteralContext : public NumberContext {
  public:
    IntegerLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *INTEGER_VALUE();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SmallIntLiteralContext : public NumberContext {
  public:
    SmallIntLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *SMALLINT_LITERAL();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumberContext* number();

  class  AlterColumnActionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *setOrDrop = nullptr;
    AlterColumnActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    DataTypeContext *dataType();
    CommentSpecContext *commentSpec();
    ColPositionContext *colPosition();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *THENULL();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterColumnActionContext* alterColumnAction();

  class  AnsiNonReservedContext : public antlr4::ParserRuleContext {
  public:
    AnsiNonReservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *ARCHIVE();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *BUCKET();
    antlr4::tree::TerminalNode *BUCKETS();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *CLEAR();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *CLUSTERED();
    antlr4::tree::TerminalNode *CODEGEN();
    antlr4::tree::TerminalNode *COLLECTION();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPACTIONS();
    antlr4::tree::TerminalNode *COMPUTE();
    antlr4::tree::TerminalNode *CONCATENATE();
    antlr4::tree::TerminalNode *COST();
    antlr4::tree::TerminalNode *CUBE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *DBPROPERTIES();
    antlr4::tree::TerminalNode *DEFINED();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DELIMITED();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DFS();
    antlr4::tree::TerminalNode *DIRECTORIES();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ESCAPED();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *FILEFORMAT();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FORMATTED();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *FUNCTIONS();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INPATH();
    antlr4::tree::TerminalNode *INPUTFORMAT();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *ITEMS();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *LAZY();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *LINES();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *MACRO();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MSCK();
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *NAMESPACES();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *THENULLS();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTPUTFORMAT();
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *OVERLAY();
    antlr4::tree::TerminalNode *OVERWRITE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PARTITIONED();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PERCENTLIT();
    antlr4::tree::TerminalNode *PIVOT();
    antlr4::tree::TerminalNode *PLACING();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *PRINCIPALS();
    antlr4::tree::TerminalNode *PROPERTIES();
    antlr4::tree::TerminalNode *PURGE();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *RECORDREADER();
    antlr4::tree::TerminalNode *RECORDWRITER();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *REDUCE();
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROLES();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SEPARATED();
    antlr4::tree::TerminalNode *SERDE();
    antlr4::tree::TerminalNode *SERDEPROPERTIES();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *SKEWED();
    antlr4::tree::TerminalNode *SORT();
    antlr4::tree::TerminalNode *SORTED();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *STORED();
    antlr4::tree::TerminalNode *STRATIFY();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *TBLPROPERTIES();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TERMINATED();
    antlr4::tree::TerminalNode *TOUCH();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRANSACTIONS();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *UNARCHIVE();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNCACHE();
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *UNSET();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *VIEWS();
    antlr4::tree::TerminalNode *WINDOW();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnsiNonReservedContext* ansiNonReserved();

  class  StrictNonReservedContext : public antlr4::ParserRuleContext {
  public:
    StrictNonReservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANTI();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *SETMINUS();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *USING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StrictNonReservedContext* strictNonReserved();

  class  NonReservedContext : public antlr4::ParserRuleContext {
  public:
    NonReservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *ARCHIVE();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *BUCKET();
    antlr4::tree::TerminalNode *BUCKETS();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *CLEAR();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *CLUSTERED();
    antlr4::tree::TerminalNode *CODEGEN();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *COLLECTION();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPACTIONS();
    antlr4::tree::TerminalNode *COMPUTE();
    antlr4::tree::TerminalNode *CONCATENATE();
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *COST();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CUBE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DBPROPERTIES();
    antlr4::tree::TerminalNode *DEFINED();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DELIMITED();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DFS();
    antlr4::tree::TerminalNode *DIRECTORIES();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *ESCAPED();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *FILEFORMAT();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FORMATTED();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *FUNCTIONS();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *HAVING();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INPATH();
    antlr4::tree::TerminalNode *INPUTFORMAT();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *ITEMS();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *LAZY();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *LINES();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *MACRO();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MSCK();
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *NAMESPACES();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *THENULL();
    antlr4::tree::TerminalNode *THENULLS();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *OUTPUTFORMAT();
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *OVERLAY();
    antlr4::tree::TerminalNode *OVERWRITE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PARTITIONED();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PERCENTLIT();
    antlr4::tree::TerminalNode *PIVOT();
    antlr4::tree::TerminalNode *PLACING();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *PRINCIPALS();
    antlr4::tree::TerminalNode *PROPERTIES();
    antlr4::tree::TerminalNode *PURGE();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *RECORDREADER();
    antlr4::tree::TerminalNode *RECORDWRITER();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *REDUCE();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROLES();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SEPARATED();
    antlr4::tree::TerminalNode *SERDE();
    antlr4::tree::TerminalNode *SERDEPROPERTIES();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *SKEWED();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SORT();
    antlr4::tree::TerminalNode *SORTED();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *STORED();
    antlr4::tree::TerminalNode *STRATIFY();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *TBLPROPERTIES();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TERMINATED();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TOUCH();
    antlr4::tree::TerminalNode *TRAILING();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRANSACTIONS();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *UNARCHIVE();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNCACHE();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *UNSET();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *VIEWS();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *WINDOW();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *YEAR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NonReservedContext* nonReserved();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool fuguePartitionNumSempred(FuguePartitionNumContext *_localctx, size_t predicateIndex);
  bool queryTermSempred(QueryTermContext *_localctx, size_t predicateIndex);
  bool booleanExpressionSempred(BooleanExpressionContext *_localctx, size_t predicateIndex);
  bool valueExpressionSempred(ValueExpressionContext *_localctx, size_t predicateIndex);
  bool primaryExpressionSempred(PrimaryExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

