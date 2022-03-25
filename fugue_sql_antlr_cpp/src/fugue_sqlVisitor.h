
// Generated from fugue_sql.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "fugue_sqlParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by fugue_sqlParser.
 */
class  fugue_sqlVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by fugue_sqlParser.
   */
    virtual antlrcpp::Any visitFugueLanguage(fugue_sqlParser::FugueLanguageContext *context) = 0;

    virtual antlrcpp::Any visitFugueSingleStatement(fugue_sqlParser::FugueSingleStatementContext *context) = 0;

    virtual antlrcpp::Any visitFugueSingleTask(fugue_sqlParser::FugueSingleTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueNestableTask(fugue_sqlParser::FugueNestableTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueNestableTaskCollectionNoSelect(fugue_sqlParser::FugueNestableTaskCollectionNoSelectContext *context) = 0;

    virtual antlrcpp::Any visitFugueTransformTask(fugue_sqlParser::FugueTransformTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueProcessTask(fugue_sqlParser::FugueProcessTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueSaveAndUseTask(fugue_sqlParser::FugueSaveAndUseTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueRenameColumnsTask(fugue_sqlParser::FugueRenameColumnsTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueAlterColumnsTask(fugue_sqlParser::FugueAlterColumnsTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueDropColumnsTask(fugue_sqlParser::FugueDropColumnsTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueDropnaTask(fugue_sqlParser::FugueDropnaTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueFillnaTask(fugue_sqlParser::FugueFillnaTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueSampleTask(fugue_sqlParser::FugueSampleTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueTakeTask(fugue_sqlParser::FugueTakeTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueZipTask(fugue_sqlParser::FugueZipTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueCreateTask(fugue_sqlParser::FugueCreateTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueCreateDataTask(fugue_sqlParser::FugueCreateDataTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueLoadTask(fugue_sqlParser::FugueLoadTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueOutputTask(fugue_sqlParser::FugueOutputTaskContext *context) = 0;

    virtual antlrcpp::Any visitFuguePrintTask(fugue_sqlParser::FuguePrintTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueSaveTask(fugue_sqlParser::FugueSaveTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueOutputTransformTask(fugue_sqlParser::FugueOutputTransformTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueModuleTask(fugue_sqlParser::FugueModuleTaskContext *context) = 0;

    virtual antlrcpp::Any visitFugueSqlEngine(fugue_sqlParser::FugueSqlEngineContext *context) = 0;

    virtual antlrcpp::Any visitFugueSingleFile(fugue_sqlParser::FugueSingleFileContext *context) = 0;

    virtual antlrcpp::Any visitFugueLoadColumns(fugue_sqlParser::FugueLoadColumnsContext *context) = 0;

    virtual antlrcpp::Any visitFugueSaveMode(fugue_sqlParser::FugueSaveModeContext *context) = 0;

    virtual antlrcpp::Any visitFugueFileFormat(fugue_sqlParser::FugueFileFormatContext *context) = 0;

    virtual antlrcpp::Any visitFuguePath(fugue_sqlParser::FuguePathContext *context) = 0;

    virtual antlrcpp::Any visitFugueCheckpointWeak(fugue_sqlParser::FugueCheckpointWeakContext *context) = 0;

    virtual antlrcpp::Any visitFugueCheckpointStrong(fugue_sqlParser::FugueCheckpointStrongContext *context) = 0;

    virtual antlrcpp::Any visitFugueCheckpointDeterministic(fugue_sqlParser::FugueCheckpointDeterministicContext *context) = 0;

    virtual antlrcpp::Any visitFugueCheckpointNamespace(fugue_sqlParser::FugueCheckpointNamespaceContext *context) = 0;

    virtual antlrcpp::Any visitFugueYield(fugue_sqlParser::FugueYieldContext *context) = 0;

    virtual antlrcpp::Any visitFugueBroadcast(fugue_sqlParser::FugueBroadcastContext *context) = 0;

    virtual antlrcpp::Any visitFugueDataFramesList(fugue_sqlParser::FugueDataFramesListContext *context) = 0;

    virtual antlrcpp::Any visitFugueDataFramesDict(fugue_sqlParser::FugueDataFramesDictContext *context) = 0;

    virtual antlrcpp::Any visitFugueDataFramePair(fugue_sqlParser::FugueDataFramePairContext *context) = 0;

    virtual antlrcpp::Any visitFugueDataFrameSource(fugue_sqlParser::FugueDataFrameSourceContext *context) = 0;

    virtual antlrcpp::Any visitFugueDataFrameNested(fugue_sqlParser::FugueDataFrameNestedContext *context) = 0;

    virtual antlrcpp::Any visitFugueDataFrameMember(fugue_sqlParser::FugueDataFrameMemberContext *context) = 0;

    virtual antlrcpp::Any visitFugueAssignment(fugue_sqlParser::FugueAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitFugueAssignmentSign(fugue_sqlParser::FugueAssignmentSignContext *context) = 0;

    virtual antlrcpp::Any visitFugueSingleOutputExtensionCommonWild(fugue_sqlParser::FugueSingleOutputExtensionCommonWildContext *context) = 0;

    virtual antlrcpp::Any visitFugueSingleOutputExtensionCommon(fugue_sqlParser::FugueSingleOutputExtensionCommonContext *context) = 0;

    virtual antlrcpp::Any visitFugueExtension(fugue_sqlParser::FugueExtensionContext *context) = 0;

    virtual antlrcpp::Any visitFugueSampleMethod(fugue_sqlParser::FugueSampleMethodContext *context) = 0;

    virtual antlrcpp::Any visitFugueZipType(fugue_sqlParser::FugueZipTypeContext *context) = 0;

    virtual antlrcpp::Any visitFuguePrepartition(fugue_sqlParser::FuguePrepartitionContext *context) = 0;

    virtual antlrcpp::Any visitFuguePartitionAlgo(fugue_sqlParser::FuguePartitionAlgoContext *context) = 0;

    virtual antlrcpp::Any visitFuguePartitionNum(fugue_sqlParser::FuguePartitionNumContext *context) = 0;

    virtual antlrcpp::Any visitFuguePartitionNumber(fugue_sqlParser::FuguePartitionNumberContext *context) = 0;

    virtual antlrcpp::Any visitFugueParamsPairs(fugue_sqlParser::FugueParamsPairsContext *context) = 0;

    virtual antlrcpp::Any visitFugueParamsObj(fugue_sqlParser::FugueParamsObjContext *context) = 0;

    virtual antlrcpp::Any visitFugueCols(fugue_sqlParser::FugueColsContext *context) = 0;

    virtual antlrcpp::Any visitFugueColsSort(fugue_sqlParser::FugueColsSortContext *context) = 0;

    virtual antlrcpp::Any visitFugueColSort(fugue_sqlParser::FugueColSortContext *context) = 0;

    virtual antlrcpp::Any visitFugueColumnIdentifier(fugue_sqlParser::FugueColumnIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitFugueRenameExpression(fugue_sqlParser::FugueRenameExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFugueWildSchema(fugue_sqlParser::FugueWildSchemaContext *context) = 0;

    virtual antlrcpp::Any visitFugueWildSchemaPair(fugue_sqlParser::FugueWildSchemaPairContext *context) = 0;

    virtual antlrcpp::Any visitFugueSchemaOp(fugue_sqlParser::FugueSchemaOpContext *context) = 0;

    virtual antlrcpp::Any visitFugueSchema(fugue_sqlParser::FugueSchemaContext *context) = 0;

    virtual antlrcpp::Any visitFugueSchemaPair(fugue_sqlParser::FugueSchemaPairContext *context) = 0;

    virtual antlrcpp::Any visitFugueSchemaKey(fugue_sqlParser::FugueSchemaKeyContext *context) = 0;

    virtual antlrcpp::Any visitFugueSchemaSimpleType(fugue_sqlParser::FugueSchemaSimpleTypeContext *context) = 0;

    virtual antlrcpp::Any visitFugueSchemaListType(fugue_sqlParser::FugueSchemaListTypeContext *context) = 0;

    virtual antlrcpp::Any visitFugueSchemaStructType(fugue_sqlParser::FugueSchemaStructTypeContext *context) = 0;

    virtual antlrcpp::Any visitFugueRenamePair(fugue_sqlParser::FugueRenamePairContext *context) = 0;

    virtual antlrcpp::Any visitFugueJson(fugue_sqlParser::FugueJsonContext *context) = 0;

    virtual antlrcpp::Any visitFugueJsonObj(fugue_sqlParser::FugueJsonObjContext *context) = 0;

    virtual antlrcpp::Any visitFugueJsonPairs(fugue_sqlParser::FugueJsonPairsContext *context) = 0;

    virtual antlrcpp::Any visitFugueJsonPair(fugue_sqlParser::FugueJsonPairContext *context) = 0;

    virtual antlrcpp::Any visitFugueJsonKey(fugue_sqlParser::FugueJsonKeyContext *context) = 0;

    virtual antlrcpp::Any visitFugueJsonArray(fugue_sqlParser::FugueJsonArrayContext *context) = 0;

    virtual antlrcpp::Any visitFugueJsonValue(fugue_sqlParser::FugueJsonValueContext *context) = 0;

    virtual antlrcpp::Any visitFugueJsonNumber(fugue_sqlParser::FugueJsonNumberContext *context) = 0;

    virtual antlrcpp::Any visitFugueJsonString(fugue_sqlParser::FugueJsonStringContext *context) = 0;

    virtual antlrcpp::Any visitFugueJsonBool(fugue_sqlParser::FugueJsonBoolContext *context) = 0;

    virtual antlrcpp::Any visitFugueJsonNull(fugue_sqlParser::FugueJsonNullContext *context) = 0;

    virtual antlrcpp::Any visitFugueIdentifier(fugue_sqlParser::FugueIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitSingleStatement(fugue_sqlParser::SingleStatementContext *context) = 0;

    virtual antlrcpp::Any visitSingleExpression(fugue_sqlParser::SingleExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSingleTableIdentifier(fugue_sqlParser::SingleTableIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitSingleMultipartIdentifier(fugue_sqlParser::SingleMultipartIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitSingleFunctionIdentifier(fugue_sqlParser::SingleFunctionIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitSingleDataType(fugue_sqlParser::SingleDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitSingleTableSchema(fugue_sqlParser::SingleTableSchemaContext *context) = 0;

    virtual antlrcpp::Any visitStatementDefault(fugue_sqlParser::StatementDefaultContext *context) = 0;

    virtual antlrcpp::Any visitDmlStatement(fugue_sqlParser::DmlStatementContext *context) = 0;

    virtual antlrcpp::Any visitUse(fugue_sqlParser::UseContext *context) = 0;

    virtual antlrcpp::Any visitCreateNamespace(fugue_sqlParser::CreateNamespaceContext *context) = 0;

    virtual antlrcpp::Any visitSetNamespaceProperties(fugue_sqlParser::SetNamespacePropertiesContext *context) = 0;

    virtual antlrcpp::Any visitSetNamespaceLocation(fugue_sqlParser::SetNamespaceLocationContext *context) = 0;

    virtual antlrcpp::Any visitDropNamespace(fugue_sqlParser::DropNamespaceContext *context) = 0;

    virtual antlrcpp::Any visitShowNamespaces(fugue_sqlParser::ShowNamespacesContext *context) = 0;

    virtual antlrcpp::Any visitCreateTable(fugue_sqlParser::CreateTableContext *context) = 0;

    virtual antlrcpp::Any visitCreateHiveTable(fugue_sqlParser::CreateHiveTableContext *context) = 0;

    virtual antlrcpp::Any visitCreateTableLike(fugue_sqlParser::CreateTableLikeContext *context) = 0;

    virtual antlrcpp::Any visitReplaceTable(fugue_sqlParser::ReplaceTableContext *context) = 0;

    virtual antlrcpp::Any visitAnalyze(fugue_sqlParser::AnalyzeContext *context) = 0;

    virtual antlrcpp::Any visitAddTableColumns(fugue_sqlParser::AddTableColumnsContext *context) = 0;

    virtual antlrcpp::Any visitRenameTableColumn(fugue_sqlParser::RenameTableColumnContext *context) = 0;

    virtual antlrcpp::Any visitDropTableColumns(fugue_sqlParser::DropTableColumnsContext *context) = 0;

    virtual antlrcpp::Any visitRenameTable(fugue_sqlParser::RenameTableContext *context) = 0;

    virtual antlrcpp::Any visitSetTableProperties(fugue_sqlParser::SetTablePropertiesContext *context) = 0;

    virtual antlrcpp::Any visitUnsetTableProperties(fugue_sqlParser::UnsetTablePropertiesContext *context) = 0;

    virtual antlrcpp::Any visitAlterTableAlterColumn(fugue_sqlParser::AlterTableAlterColumnContext *context) = 0;

    virtual antlrcpp::Any visitHiveChangeColumn(fugue_sqlParser::HiveChangeColumnContext *context) = 0;

    virtual antlrcpp::Any visitHiveReplaceColumns(fugue_sqlParser::HiveReplaceColumnsContext *context) = 0;

    virtual antlrcpp::Any visitSetTableSerDe(fugue_sqlParser::SetTableSerDeContext *context) = 0;

    virtual antlrcpp::Any visitAddTablePartition(fugue_sqlParser::AddTablePartitionContext *context) = 0;

    virtual antlrcpp::Any visitRenameTablePartition(fugue_sqlParser::RenameTablePartitionContext *context) = 0;

    virtual antlrcpp::Any visitDropTablePartitions(fugue_sqlParser::DropTablePartitionsContext *context) = 0;

    virtual antlrcpp::Any visitSetTableLocation(fugue_sqlParser::SetTableLocationContext *context) = 0;

    virtual antlrcpp::Any visitRecoverPartitions(fugue_sqlParser::RecoverPartitionsContext *context) = 0;

    virtual antlrcpp::Any visitDropTable(fugue_sqlParser::DropTableContext *context) = 0;

    virtual antlrcpp::Any visitDropView(fugue_sqlParser::DropViewContext *context) = 0;

    virtual antlrcpp::Any visitCreateView(fugue_sqlParser::CreateViewContext *context) = 0;

    virtual antlrcpp::Any visitCreateTempViewUsing(fugue_sqlParser::CreateTempViewUsingContext *context) = 0;

    virtual antlrcpp::Any visitAlterViewQuery(fugue_sqlParser::AlterViewQueryContext *context) = 0;

    virtual antlrcpp::Any visitCreateFunction(fugue_sqlParser::CreateFunctionContext *context) = 0;

    virtual antlrcpp::Any visitDropFunction(fugue_sqlParser::DropFunctionContext *context) = 0;

    virtual antlrcpp::Any visitExplain(fugue_sqlParser::ExplainContext *context) = 0;

    virtual antlrcpp::Any visitShowTables(fugue_sqlParser::ShowTablesContext *context) = 0;

    virtual antlrcpp::Any visitShowTable(fugue_sqlParser::ShowTableContext *context) = 0;

    virtual antlrcpp::Any visitShowTblProperties(fugue_sqlParser::ShowTblPropertiesContext *context) = 0;

    virtual antlrcpp::Any visitShowColumns(fugue_sqlParser::ShowColumnsContext *context) = 0;

    virtual antlrcpp::Any visitShowViews(fugue_sqlParser::ShowViewsContext *context) = 0;

    virtual antlrcpp::Any visitShowPartitions(fugue_sqlParser::ShowPartitionsContext *context) = 0;

    virtual antlrcpp::Any visitShowFunctions(fugue_sqlParser::ShowFunctionsContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateTable(fugue_sqlParser::ShowCreateTableContext *context) = 0;

    virtual antlrcpp::Any visitShowCurrentNamespace(fugue_sqlParser::ShowCurrentNamespaceContext *context) = 0;

    virtual antlrcpp::Any visitDescribeFunction(fugue_sqlParser::DescribeFunctionContext *context) = 0;

    virtual antlrcpp::Any visitDescribeNamespace(fugue_sqlParser::DescribeNamespaceContext *context) = 0;

    virtual antlrcpp::Any visitDescribeRelation(fugue_sqlParser::DescribeRelationContext *context) = 0;

    virtual antlrcpp::Any visitDescribeQuery(fugue_sqlParser::DescribeQueryContext *context) = 0;

    virtual antlrcpp::Any visitCommentNamespace(fugue_sqlParser::CommentNamespaceContext *context) = 0;

    virtual antlrcpp::Any visitCommentTable(fugue_sqlParser::CommentTableContext *context) = 0;

    virtual antlrcpp::Any visitRefreshTable(fugue_sqlParser::RefreshTableContext *context) = 0;

    virtual antlrcpp::Any visitRefreshResource(fugue_sqlParser::RefreshResourceContext *context) = 0;

    virtual antlrcpp::Any visitCacheTable(fugue_sqlParser::CacheTableContext *context) = 0;

    virtual antlrcpp::Any visitUncacheTable(fugue_sqlParser::UncacheTableContext *context) = 0;

    virtual antlrcpp::Any visitClearCache(fugue_sqlParser::ClearCacheContext *context) = 0;

    virtual antlrcpp::Any visitLoadData(fugue_sqlParser::LoadDataContext *context) = 0;

    virtual antlrcpp::Any visitTruncateTable(fugue_sqlParser::TruncateTableContext *context) = 0;

    virtual antlrcpp::Any visitRepairTable(fugue_sqlParser::RepairTableContext *context) = 0;

    virtual antlrcpp::Any visitManageResource(fugue_sqlParser::ManageResourceContext *context) = 0;

    virtual antlrcpp::Any visitFailNativeCommand(fugue_sqlParser::FailNativeCommandContext *context) = 0;

    virtual antlrcpp::Any visitSetConfiguration(fugue_sqlParser::SetConfigurationContext *context) = 0;

    virtual antlrcpp::Any visitResetConfiguration(fugue_sqlParser::ResetConfigurationContext *context) = 0;

    virtual antlrcpp::Any visitUnsupportedHiveNativeCommands(fugue_sqlParser::UnsupportedHiveNativeCommandsContext *context) = 0;

    virtual antlrcpp::Any visitCreateTableHeader(fugue_sqlParser::CreateTableHeaderContext *context) = 0;

    virtual antlrcpp::Any visitReplaceTableHeader(fugue_sqlParser::ReplaceTableHeaderContext *context) = 0;

    virtual antlrcpp::Any visitBucketSpec(fugue_sqlParser::BucketSpecContext *context) = 0;

    virtual antlrcpp::Any visitSkewSpec(fugue_sqlParser::SkewSpecContext *context) = 0;

    virtual antlrcpp::Any visitLocationSpec(fugue_sqlParser::LocationSpecContext *context) = 0;

    virtual antlrcpp::Any visitCommentSpec(fugue_sqlParser::CommentSpecContext *context) = 0;

    virtual antlrcpp::Any visitQuery(fugue_sqlParser::QueryContext *context) = 0;

    virtual antlrcpp::Any visitInsertOverwriteTable(fugue_sqlParser::InsertOverwriteTableContext *context) = 0;

    virtual antlrcpp::Any visitInsertIntoTable(fugue_sqlParser::InsertIntoTableContext *context) = 0;

    virtual antlrcpp::Any visitInsertOverwriteHiveDir(fugue_sqlParser::InsertOverwriteHiveDirContext *context) = 0;

    virtual antlrcpp::Any visitInsertOverwriteDir(fugue_sqlParser::InsertOverwriteDirContext *context) = 0;

    virtual antlrcpp::Any visitPartitionSpecLocation(fugue_sqlParser::PartitionSpecLocationContext *context) = 0;

    virtual antlrcpp::Any visitPartitionSpec(fugue_sqlParser::PartitionSpecContext *context) = 0;

    virtual antlrcpp::Any visitPartitionVal(fugue_sqlParser::PartitionValContext *context) = 0;

    virtual antlrcpp::Any visitTheNamespace(fugue_sqlParser::TheNamespaceContext *context) = 0;

    virtual antlrcpp::Any visitDescribeFuncName(fugue_sqlParser::DescribeFuncNameContext *context) = 0;

    virtual antlrcpp::Any visitDescribeColName(fugue_sqlParser::DescribeColNameContext *context) = 0;

    virtual antlrcpp::Any visitCtes(fugue_sqlParser::CtesContext *context) = 0;

    virtual antlrcpp::Any visitNamedQuery(fugue_sqlParser::NamedQueryContext *context) = 0;

    virtual antlrcpp::Any visitTableProvider(fugue_sqlParser::TableProviderContext *context) = 0;

    virtual antlrcpp::Any visitCreateTableClauses(fugue_sqlParser::CreateTableClausesContext *context) = 0;

    virtual antlrcpp::Any visitTablePropertyList(fugue_sqlParser::TablePropertyListContext *context) = 0;

    virtual antlrcpp::Any visitTableProperty(fugue_sqlParser::TablePropertyContext *context) = 0;

    virtual antlrcpp::Any visitTablePropertyKey(fugue_sqlParser::TablePropertyKeyContext *context) = 0;

    virtual antlrcpp::Any visitTablePropertyValue(fugue_sqlParser::TablePropertyValueContext *context) = 0;

    virtual antlrcpp::Any visitConstantList(fugue_sqlParser::ConstantListContext *context) = 0;

    virtual antlrcpp::Any visitNestedConstantList(fugue_sqlParser::NestedConstantListContext *context) = 0;

    virtual antlrcpp::Any visitCreateFileFormat(fugue_sqlParser::CreateFileFormatContext *context) = 0;

    virtual antlrcpp::Any visitTableFileFormat(fugue_sqlParser::TableFileFormatContext *context) = 0;

    virtual antlrcpp::Any visitGenericFileFormat(fugue_sqlParser::GenericFileFormatContext *context) = 0;

    virtual antlrcpp::Any visitStorageHandler(fugue_sqlParser::StorageHandlerContext *context) = 0;

    virtual antlrcpp::Any visitResource(fugue_sqlParser::ResourceContext *context) = 0;

    virtual antlrcpp::Any visitSingleInsertQuery(fugue_sqlParser::SingleInsertQueryContext *context) = 0;

    virtual antlrcpp::Any visitMultiInsertQuery(fugue_sqlParser::MultiInsertQueryContext *context) = 0;

    virtual antlrcpp::Any visitDeleteFromTable(fugue_sqlParser::DeleteFromTableContext *context) = 0;

    virtual antlrcpp::Any visitUpdateTable(fugue_sqlParser::UpdateTableContext *context) = 0;

    virtual antlrcpp::Any visitMergeIntoTable(fugue_sqlParser::MergeIntoTableContext *context) = 0;

    virtual antlrcpp::Any visitQueryOrganization(fugue_sqlParser::QueryOrganizationContext *context) = 0;

    virtual antlrcpp::Any visitMultiInsertQueryBody(fugue_sqlParser::MultiInsertQueryBodyContext *context) = 0;

    virtual antlrcpp::Any visitQueryTermDefault(fugue_sqlParser::QueryTermDefaultContext *context) = 0;

    virtual antlrcpp::Any visitFugueTerm(fugue_sqlParser::FugueTermContext *context) = 0;

    virtual antlrcpp::Any visitSetOperation(fugue_sqlParser::SetOperationContext *context) = 0;

    virtual antlrcpp::Any visitQueryPrimaryDefault(fugue_sqlParser::QueryPrimaryDefaultContext *context) = 0;

    virtual antlrcpp::Any visitFromStmt(fugue_sqlParser::FromStmtContext *context) = 0;

    virtual antlrcpp::Any visitTable(fugue_sqlParser::TableContext *context) = 0;

    virtual antlrcpp::Any visitInlineTableDefault1(fugue_sqlParser::InlineTableDefault1Context *context) = 0;

    virtual antlrcpp::Any visitSortItem(fugue_sqlParser::SortItemContext *context) = 0;

    virtual antlrcpp::Any visitFromStatement(fugue_sqlParser::FromStatementContext *context) = 0;

    virtual antlrcpp::Any visitFromStatementBody(fugue_sqlParser::FromStatementBodyContext *context) = 0;

    virtual antlrcpp::Any visitTransformQuerySpecification(fugue_sqlParser::TransformQuerySpecificationContext *context) = 0;

    virtual antlrcpp::Any visitRegularQuerySpecification(fugue_sqlParser::RegularQuerySpecificationContext *context) = 0;

    virtual antlrcpp::Any visitOptionalFromClause(fugue_sqlParser::OptionalFromClauseContext *context) = 0;

    virtual antlrcpp::Any visitTransformClause(fugue_sqlParser::TransformClauseContext *context) = 0;

    virtual antlrcpp::Any visitSelectClause(fugue_sqlParser::SelectClauseContext *context) = 0;

    virtual antlrcpp::Any visitSetClause(fugue_sqlParser::SetClauseContext *context) = 0;

    virtual antlrcpp::Any visitMatchedClause(fugue_sqlParser::MatchedClauseContext *context) = 0;

    virtual antlrcpp::Any visitNotMatchedClause(fugue_sqlParser::NotMatchedClauseContext *context) = 0;

    virtual antlrcpp::Any visitMatchedAction(fugue_sqlParser::MatchedActionContext *context) = 0;

    virtual antlrcpp::Any visitNotMatchedAction(fugue_sqlParser::NotMatchedActionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentList(fugue_sqlParser::AssignmentListContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(fugue_sqlParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitWhereClause(fugue_sqlParser::WhereClauseContext *context) = 0;

    virtual antlrcpp::Any visitHavingClause(fugue_sqlParser::HavingClauseContext *context) = 0;

    virtual antlrcpp::Any visitHint(fugue_sqlParser::HintContext *context) = 0;

    virtual antlrcpp::Any visitHintStatement(fugue_sqlParser::HintStatementContext *context) = 0;

    virtual antlrcpp::Any visitFromClause(fugue_sqlParser::FromClauseContext *context) = 0;

    virtual antlrcpp::Any visitAggregationClause(fugue_sqlParser::AggregationClauseContext *context) = 0;

    virtual antlrcpp::Any visitGroupingSet(fugue_sqlParser::GroupingSetContext *context) = 0;

    virtual antlrcpp::Any visitPivotClause(fugue_sqlParser::PivotClauseContext *context) = 0;

    virtual antlrcpp::Any visitPivotColumn(fugue_sqlParser::PivotColumnContext *context) = 0;

    virtual antlrcpp::Any visitPivotValue(fugue_sqlParser::PivotValueContext *context) = 0;

    virtual antlrcpp::Any visitLateralView(fugue_sqlParser::LateralViewContext *context) = 0;

    virtual antlrcpp::Any visitSetQuantifier(fugue_sqlParser::SetQuantifierContext *context) = 0;

    virtual antlrcpp::Any visitRelation(fugue_sqlParser::RelationContext *context) = 0;

    virtual antlrcpp::Any visitJoinRelation(fugue_sqlParser::JoinRelationContext *context) = 0;

    virtual antlrcpp::Any visitJoinType(fugue_sqlParser::JoinTypeContext *context) = 0;

    virtual antlrcpp::Any visitJoinCriteria(fugue_sqlParser::JoinCriteriaContext *context) = 0;

    virtual antlrcpp::Any visitSample(fugue_sqlParser::SampleContext *context) = 0;

    virtual antlrcpp::Any visitSampleByPercentile(fugue_sqlParser::SampleByPercentileContext *context) = 0;

    virtual antlrcpp::Any visitSampleByRows(fugue_sqlParser::SampleByRowsContext *context) = 0;

    virtual antlrcpp::Any visitSampleByBucket(fugue_sqlParser::SampleByBucketContext *context) = 0;

    virtual antlrcpp::Any visitSampleByBytes(fugue_sqlParser::SampleByBytesContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(fugue_sqlParser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierSeq(fugue_sqlParser::IdentifierSeqContext *context) = 0;

    virtual antlrcpp::Any visitOrderedIdentifierList(fugue_sqlParser::OrderedIdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitOrderedIdentifier(fugue_sqlParser::OrderedIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierCommentList(fugue_sqlParser::IdentifierCommentListContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierComment(fugue_sqlParser::IdentifierCommentContext *context) = 0;

    virtual antlrcpp::Any visitTableName(fugue_sqlParser::TableNameContext *context) = 0;

    virtual antlrcpp::Any visitAliasedQuery(fugue_sqlParser::AliasedQueryContext *context) = 0;

    virtual antlrcpp::Any visitAliasedRelation(fugue_sqlParser::AliasedRelationContext *context) = 0;

    virtual antlrcpp::Any visitInlineTableDefault2(fugue_sqlParser::InlineTableDefault2Context *context) = 0;

    virtual antlrcpp::Any visitTableValuedFunction(fugue_sqlParser::TableValuedFunctionContext *context) = 0;

    virtual antlrcpp::Any visitInlineTable(fugue_sqlParser::InlineTableContext *context) = 0;

    virtual antlrcpp::Any visitFunctionTable(fugue_sqlParser::FunctionTableContext *context) = 0;

    virtual antlrcpp::Any visitTableAlias(fugue_sqlParser::TableAliasContext *context) = 0;

    virtual antlrcpp::Any visitRowFormatSerde(fugue_sqlParser::RowFormatSerdeContext *context) = 0;

    virtual antlrcpp::Any visitRowFormatDelimited(fugue_sqlParser::RowFormatDelimitedContext *context) = 0;

    virtual antlrcpp::Any visitMultipartIdentifierList(fugue_sqlParser::MultipartIdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitMultipartIdentifier(fugue_sqlParser::MultipartIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitTableIdentifier(fugue_sqlParser::TableIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitFunctionIdentifier(fugue_sqlParser::FunctionIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitNamedExpression(fugue_sqlParser::NamedExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNamedExpressionSeq(fugue_sqlParser::NamedExpressionSeqContext *context) = 0;

    virtual antlrcpp::Any visitTransformList(fugue_sqlParser::TransformListContext *context) = 0;

    virtual antlrcpp::Any visitIdentityTransform(fugue_sqlParser::IdentityTransformContext *context) = 0;

    virtual antlrcpp::Any visitApplyTransform(fugue_sqlParser::ApplyTransformContext *context) = 0;

    virtual antlrcpp::Any visitTransformArgument(fugue_sqlParser::TransformArgumentContext *context) = 0;

    virtual antlrcpp::Any visitExpression(fugue_sqlParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalNot(fugue_sqlParser::LogicalNotContext *context) = 0;

    virtual antlrcpp::Any visitPredicated(fugue_sqlParser::PredicatedContext *context) = 0;

    virtual antlrcpp::Any visitExists(fugue_sqlParser::ExistsContext *context) = 0;

    virtual antlrcpp::Any visitLogicalBinary(fugue_sqlParser::LogicalBinaryContext *context) = 0;

    virtual antlrcpp::Any visitPredicate(fugue_sqlParser::PredicateContext *context) = 0;

    virtual antlrcpp::Any visitValueExpressionDefault(fugue_sqlParser::ValueExpressionDefaultContext *context) = 0;

    virtual antlrcpp::Any visitComparison(fugue_sqlParser::ComparisonContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticBinary(fugue_sqlParser::ArithmeticBinaryContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticUnary(fugue_sqlParser::ArithmeticUnaryContext *context) = 0;

    virtual antlrcpp::Any visitStruct(fugue_sqlParser::StructContext *context) = 0;

    virtual antlrcpp::Any visitDereference(fugue_sqlParser::DereferenceContext *context) = 0;

    virtual antlrcpp::Any visitSimpleCase(fugue_sqlParser::SimpleCaseContext *context) = 0;

    virtual antlrcpp::Any visitColumnReference(fugue_sqlParser::ColumnReferenceContext *context) = 0;

    virtual antlrcpp::Any visitRowConstructor(fugue_sqlParser::RowConstructorContext *context) = 0;

    virtual antlrcpp::Any visitLast(fugue_sqlParser::LastContext *context) = 0;

    virtual antlrcpp::Any visitStar(fugue_sqlParser::StarContext *context) = 0;

    virtual antlrcpp::Any visitOverlay(fugue_sqlParser::OverlayContext *context) = 0;

    virtual antlrcpp::Any visitSubscript(fugue_sqlParser::SubscriptContext *context) = 0;

    virtual antlrcpp::Any visitSubqueryExpression(fugue_sqlParser::SubqueryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSubstring(fugue_sqlParser::SubstringContext *context) = 0;

    virtual antlrcpp::Any visitCurrentDatetime(fugue_sqlParser::CurrentDatetimeContext *context) = 0;

    virtual antlrcpp::Any visitCast(fugue_sqlParser::CastContext *context) = 0;

    virtual antlrcpp::Any visitConstantDefault(fugue_sqlParser::ConstantDefaultContext *context) = 0;

    virtual antlrcpp::Any visitLambda(fugue_sqlParser::LambdaContext *context) = 0;

    virtual antlrcpp::Any visitParenthesizedExpression(fugue_sqlParser::ParenthesizedExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExtract(fugue_sqlParser::ExtractContext *context) = 0;

    virtual antlrcpp::Any visitTrim(fugue_sqlParser::TrimContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(fugue_sqlParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitSearchedCase(fugue_sqlParser::SearchedCaseContext *context) = 0;

    virtual antlrcpp::Any visitPosition(fugue_sqlParser::PositionContext *context) = 0;

    virtual antlrcpp::Any visitFirst(fugue_sqlParser::FirstContext *context) = 0;

    virtual antlrcpp::Any visitNullLiteral(fugue_sqlParser::NullLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntervalLiteral(fugue_sqlParser::IntervalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitTypeConstructor(fugue_sqlParser::TypeConstructorContext *context) = 0;

    virtual antlrcpp::Any visitNumericLiteral(fugue_sqlParser::NumericLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(fugue_sqlParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(fugue_sqlParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperator(fugue_sqlParser::ComparisonOperatorContext *context) = 0;

    virtual antlrcpp::Any visitComparisonEqualOperator(fugue_sqlParser::ComparisonEqualOperatorContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticOperator(fugue_sqlParser::ArithmeticOperatorContext *context) = 0;

    virtual antlrcpp::Any visitPredicateOperator(fugue_sqlParser::PredicateOperatorContext *context) = 0;

    virtual antlrcpp::Any visitBooleanValue(fugue_sqlParser::BooleanValueContext *context) = 0;

    virtual antlrcpp::Any visitInterval(fugue_sqlParser::IntervalContext *context) = 0;

    virtual antlrcpp::Any visitErrorCapturingMultiUnitsInterval(fugue_sqlParser::ErrorCapturingMultiUnitsIntervalContext *context) = 0;

    virtual antlrcpp::Any visitMultiUnitsInterval(fugue_sqlParser::MultiUnitsIntervalContext *context) = 0;

    virtual antlrcpp::Any visitErrorCapturingUnitToUnitInterval(fugue_sqlParser::ErrorCapturingUnitToUnitIntervalContext *context) = 0;

    virtual antlrcpp::Any visitUnitToUnitInterval(fugue_sqlParser::UnitToUnitIntervalContext *context) = 0;

    virtual antlrcpp::Any visitIntervalValue(fugue_sqlParser::IntervalValueContext *context) = 0;

    virtual antlrcpp::Any visitIntervalUnit(fugue_sqlParser::IntervalUnitContext *context) = 0;

    virtual antlrcpp::Any visitColPosition(fugue_sqlParser::ColPositionContext *context) = 0;

    virtual antlrcpp::Any visitComplexDataType(fugue_sqlParser::ComplexDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitPrimitiveDataType(fugue_sqlParser::PrimitiveDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedColTypeWithPositionList(fugue_sqlParser::QualifiedColTypeWithPositionListContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedColTypeWithPosition(fugue_sqlParser::QualifiedColTypeWithPositionContext *context) = 0;

    virtual antlrcpp::Any visitColTypeList(fugue_sqlParser::ColTypeListContext *context) = 0;

    virtual antlrcpp::Any visitColType(fugue_sqlParser::ColTypeContext *context) = 0;

    virtual antlrcpp::Any visitComplexColTypeList(fugue_sqlParser::ComplexColTypeListContext *context) = 0;

    virtual antlrcpp::Any visitComplexColType(fugue_sqlParser::ComplexColTypeContext *context) = 0;

    virtual antlrcpp::Any visitWhenClause(fugue_sqlParser::WhenClauseContext *context) = 0;

    virtual antlrcpp::Any visitWindowClause(fugue_sqlParser::WindowClauseContext *context) = 0;

    virtual antlrcpp::Any visitNamedWindow(fugue_sqlParser::NamedWindowContext *context) = 0;

    virtual antlrcpp::Any visitWindowRef(fugue_sqlParser::WindowRefContext *context) = 0;

    virtual antlrcpp::Any visitWindowDef(fugue_sqlParser::WindowDefContext *context) = 0;

    virtual antlrcpp::Any visitWindowFrame(fugue_sqlParser::WindowFrameContext *context) = 0;

    virtual antlrcpp::Any visitFrameBound(fugue_sqlParser::FrameBoundContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedNameList(fugue_sqlParser::QualifiedNameListContext *context) = 0;

    virtual antlrcpp::Any visitFunctionName(fugue_sqlParser::FunctionNameContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedName(fugue_sqlParser::QualifiedNameContext *context) = 0;

    virtual antlrcpp::Any visitErrorCapturingIdentifier(fugue_sqlParser::ErrorCapturingIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitErrorIdent(fugue_sqlParser::ErrorIdentContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(fugue_sqlParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitUnquotedIdentifier(fugue_sqlParser::UnquotedIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitQuotedIdentifierAlternative(fugue_sqlParser::QuotedIdentifierAlternativeContext *context) = 0;

    virtual antlrcpp::Any visitQuotedIdentifier(fugue_sqlParser::QuotedIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitExponentLiteral(fugue_sqlParser::ExponentLiteralContext *context) = 0;

    virtual antlrcpp::Any visitDecimalLiteral(fugue_sqlParser::DecimalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitLegacyDecimalLiteral(fugue_sqlParser::LegacyDecimalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(fugue_sqlParser::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBigIntLiteral(fugue_sqlParser::BigIntLiteralContext *context) = 0;

    virtual antlrcpp::Any visitSmallIntLiteral(fugue_sqlParser::SmallIntLiteralContext *context) = 0;

    virtual antlrcpp::Any visitTinyIntLiteral(fugue_sqlParser::TinyIntLiteralContext *context) = 0;

    virtual antlrcpp::Any visitDoubleLiteral(fugue_sqlParser::DoubleLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBigDecimalLiteral(fugue_sqlParser::BigDecimalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitAlterColumnAction(fugue_sqlParser::AlterColumnActionContext *context) = 0;

    virtual antlrcpp::Any visitAnsiNonReserved(fugue_sqlParser::AnsiNonReservedContext *context) = 0;

    virtual antlrcpp::Any visitStrictNonReserved(fugue_sqlParser::StrictNonReservedContext *context) = 0;

    virtual antlrcpp::Any visitNonReserved(fugue_sqlParser::NonReservedContext *context) = 0;


};

