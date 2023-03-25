
// Generated from fugue_sql.g4 by ANTLR 4.11.1

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
    virtual std::any visitFugueLanguage(fugue_sqlParser::FugueLanguageContext *context) = 0;

    virtual std::any visitFugueSingleStatement(fugue_sqlParser::FugueSingleStatementContext *context) = 0;

    virtual std::any visitFugueSingleTask(fugue_sqlParser::FugueSingleTaskContext *context) = 0;

    virtual std::any visitFugueNestableTask(fugue_sqlParser::FugueNestableTaskContext *context) = 0;

    virtual std::any visitFugueNestableTaskCollectionNoSelect(fugue_sqlParser::FugueNestableTaskCollectionNoSelectContext *context) = 0;

    virtual std::any visitFugueTransformTask(fugue_sqlParser::FugueTransformTaskContext *context) = 0;

    virtual std::any visitFugueProcessTask(fugue_sqlParser::FugueProcessTaskContext *context) = 0;

    virtual std::any visitFugueSaveAndUseTask(fugue_sqlParser::FugueSaveAndUseTaskContext *context) = 0;

    virtual std::any visitFugueRenameColumnsTask(fugue_sqlParser::FugueRenameColumnsTaskContext *context) = 0;

    virtual std::any visitFugueAlterColumnsTask(fugue_sqlParser::FugueAlterColumnsTaskContext *context) = 0;

    virtual std::any visitFugueDropColumnsTask(fugue_sqlParser::FugueDropColumnsTaskContext *context) = 0;

    virtual std::any visitFugueDropnaTask(fugue_sqlParser::FugueDropnaTaskContext *context) = 0;

    virtual std::any visitFugueFillnaTask(fugue_sqlParser::FugueFillnaTaskContext *context) = 0;

    virtual std::any visitFugueSampleTask(fugue_sqlParser::FugueSampleTaskContext *context) = 0;

    virtual std::any visitFugueTakeTask(fugue_sqlParser::FugueTakeTaskContext *context) = 0;

    virtual std::any visitFugueZipTask(fugue_sqlParser::FugueZipTaskContext *context) = 0;

    virtual std::any visitFugueCreateTask(fugue_sqlParser::FugueCreateTaskContext *context) = 0;

    virtual std::any visitFugueCreateDataTask(fugue_sqlParser::FugueCreateDataTaskContext *context) = 0;

    virtual std::any visitFugueLoadTask(fugue_sqlParser::FugueLoadTaskContext *context) = 0;

    virtual std::any visitFugueOutputTask(fugue_sqlParser::FugueOutputTaskContext *context) = 0;

    virtual std::any visitFuguePrintTask(fugue_sqlParser::FuguePrintTaskContext *context) = 0;

    virtual std::any visitFugueSaveTask(fugue_sqlParser::FugueSaveTaskContext *context) = 0;

    virtual std::any visitFugueOutputTransformTask(fugue_sqlParser::FugueOutputTransformTaskContext *context) = 0;

    virtual std::any visitFugueModuleTask(fugue_sqlParser::FugueModuleTaskContext *context) = 0;

    virtual std::any visitFugueSqlEngine(fugue_sqlParser::FugueSqlEngineContext *context) = 0;

    virtual std::any visitFugueSingleFile(fugue_sqlParser::FugueSingleFileContext *context) = 0;

    virtual std::any visitFugueLoadColumns(fugue_sqlParser::FugueLoadColumnsContext *context) = 0;

    virtual std::any visitFugueSaveMode(fugue_sqlParser::FugueSaveModeContext *context) = 0;

    virtual std::any visitFugueFileFormat(fugue_sqlParser::FugueFileFormatContext *context) = 0;

    virtual std::any visitFuguePath(fugue_sqlParser::FuguePathContext *context) = 0;

    virtual std::any visitFuguePaths(fugue_sqlParser::FuguePathsContext *context) = 0;

    virtual std::any visitFugueCheckpointWeak(fugue_sqlParser::FugueCheckpointWeakContext *context) = 0;

    virtual std::any visitFugueCheckpointStrong(fugue_sqlParser::FugueCheckpointStrongContext *context) = 0;

    virtual std::any visitFugueCheckpointDeterministic(fugue_sqlParser::FugueCheckpointDeterministicContext *context) = 0;

    virtual std::any visitFugueCheckpointNamespace(fugue_sqlParser::FugueCheckpointNamespaceContext *context) = 0;

    virtual std::any visitFugueYield(fugue_sqlParser::FugueYieldContext *context) = 0;

    virtual std::any visitFugueBroadcast(fugue_sqlParser::FugueBroadcastContext *context) = 0;

    virtual std::any visitFugueDataFramesList(fugue_sqlParser::FugueDataFramesListContext *context) = 0;

    virtual std::any visitFugueDataFramesDict(fugue_sqlParser::FugueDataFramesDictContext *context) = 0;

    virtual std::any visitFugueDataFramePair(fugue_sqlParser::FugueDataFramePairContext *context) = 0;

    virtual std::any visitFugueDataFrameSource(fugue_sqlParser::FugueDataFrameSourceContext *context) = 0;

    virtual std::any visitFugueDataFrameNested(fugue_sqlParser::FugueDataFrameNestedContext *context) = 0;

    virtual std::any visitFugueDataFrameMember(fugue_sqlParser::FugueDataFrameMemberContext *context) = 0;

    virtual std::any visitFugueAssignment(fugue_sqlParser::FugueAssignmentContext *context) = 0;

    virtual std::any visitFugueAssignmentSign(fugue_sqlParser::FugueAssignmentSignContext *context) = 0;

    virtual std::any visitFugueSingleOutputExtensionCommonWild(fugue_sqlParser::FugueSingleOutputExtensionCommonWildContext *context) = 0;

    virtual std::any visitFugueSingleOutputExtensionCommon(fugue_sqlParser::FugueSingleOutputExtensionCommonContext *context) = 0;

    virtual std::any visitFugueExtension(fugue_sqlParser::FugueExtensionContext *context) = 0;

    virtual std::any visitFugueSampleMethod(fugue_sqlParser::FugueSampleMethodContext *context) = 0;

    virtual std::any visitFugueZipType(fugue_sqlParser::FugueZipTypeContext *context) = 0;

    virtual std::any visitFuguePrepartition(fugue_sqlParser::FuguePrepartitionContext *context) = 0;

    virtual std::any visitFuguePartitionAlgo(fugue_sqlParser::FuguePartitionAlgoContext *context) = 0;

    virtual std::any visitFuguePartitionNum(fugue_sqlParser::FuguePartitionNumContext *context) = 0;

    virtual std::any visitFuguePartitionNumber(fugue_sqlParser::FuguePartitionNumberContext *context) = 0;

    virtual std::any visitFugueParamsPairs(fugue_sqlParser::FugueParamsPairsContext *context) = 0;

    virtual std::any visitFugueParamsObj(fugue_sqlParser::FugueParamsObjContext *context) = 0;

    virtual std::any visitFugueCols(fugue_sqlParser::FugueColsContext *context) = 0;

    virtual std::any visitFugueColsSort(fugue_sqlParser::FugueColsSortContext *context) = 0;

    virtual std::any visitFugueColSort(fugue_sqlParser::FugueColSortContext *context) = 0;

    virtual std::any visitFugueColumnIdentifier(fugue_sqlParser::FugueColumnIdentifierContext *context) = 0;

    virtual std::any visitFugueRenameExpression(fugue_sqlParser::FugueRenameExpressionContext *context) = 0;

    virtual std::any visitFugueWildSchema(fugue_sqlParser::FugueWildSchemaContext *context) = 0;

    virtual std::any visitFugueWildSchemaPair(fugue_sqlParser::FugueWildSchemaPairContext *context) = 0;

    virtual std::any visitFugueSchemaOp(fugue_sqlParser::FugueSchemaOpContext *context) = 0;

    virtual std::any visitFugueSchema(fugue_sqlParser::FugueSchemaContext *context) = 0;

    virtual std::any visitFugueSchemaPair(fugue_sqlParser::FugueSchemaPairContext *context) = 0;

    virtual std::any visitFugueSchemaKey(fugue_sqlParser::FugueSchemaKeyContext *context) = 0;

    virtual std::any visitFugueSchemaSimpleType(fugue_sqlParser::FugueSchemaSimpleTypeContext *context) = 0;

    virtual std::any visitFugueSchemaListType(fugue_sqlParser::FugueSchemaListTypeContext *context) = 0;

    virtual std::any visitFugueSchemaStructType(fugue_sqlParser::FugueSchemaStructTypeContext *context) = 0;

    virtual std::any visitFugueSchemaMapType(fugue_sqlParser::FugueSchemaMapTypeContext *context) = 0;

    virtual std::any visitFugueRenamePair(fugue_sqlParser::FugueRenamePairContext *context) = 0;

    virtual std::any visitFugueJson(fugue_sqlParser::FugueJsonContext *context) = 0;

    virtual std::any visitFugueJsonObj(fugue_sqlParser::FugueJsonObjContext *context) = 0;

    virtual std::any visitFugueJsonPairs(fugue_sqlParser::FugueJsonPairsContext *context) = 0;

    virtual std::any visitFugueJsonPair(fugue_sqlParser::FugueJsonPairContext *context) = 0;

    virtual std::any visitFugueJsonKey(fugue_sqlParser::FugueJsonKeyContext *context) = 0;

    virtual std::any visitFugueJsonArray(fugue_sqlParser::FugueJsonArrayContext *context) = 0;

    virtual std::any visitFugueJsonValue(fugue_sqlParser::FugueJsonValueContext *context) = 0;

    virtual std::any visitFugueJsonNumber(fugue_sqlParser::FugueJsonNumberContext *context) = 0;

    virtual std::any visitFugueJsonString(fugue_sqlParser::FugueJsonStringContext *context) = 0;

    virtual std::any visitFugueJsonBool(fugue_sqlParser::FugueJsonBoolContext *context) = 0;

    virtual std::any visitFugueJsonNull(fugue_sqlParser::FugueJsonNullContext *context) = 0;

    virtual std::any visitFugueIdentifier(fugue_sqlParser::FugueIdentifierContext *context) = 0;

    virtual std::any visitSingleStatement(fugue_sqlParser::SingleStatementContext *context) = 0;

    virtual std::any visitSingleExpression(fugue_sqlParser::SingleExpressionContext *context) = 0;

    virtual std::any visitSingleTableIdentifier(fugue_sqlParser::SingleTableIdentifierContext *context) = 0;

    virtual std::any visitSingleMultipartIdentifier(fugue_sqlParser::SingleMultipartIdentifierContext *context) = 0;

    virtual std::any visitSingleFunctionIdentifier(fugue_sqlParser::SingleFunctionIdentifierContext *context) = 0;

    virtual std::any visitSingleDataType(fugue_sqlParser::SingleDataTypeContext *context) = 0;

    virtual std::any visitSingleTableSchema(fugue_sqlParser::SingleTableSchemaContext *context) = 0;

    virtual std::any visitStatementDefault(fugue_sqlParser::StatementDefaultContext *context) = 0;

    virtual std::any visitDmlStatement(fugue_sqlParser::DmlStatementContext *context) = 0;

    virtual std::any visitUse(fugue_sqlParser::UseContext *context) = 0;

    virtual std::any visitCreateNamespace(fugue_sqlParser::CreateNamespaceContext *context) = 0;

    virtual std::any visitSetNamespaceProperties(fugue_sqlParser::SetNamespacePropertiesContext *context) = 0;

    virtual std::any visitSetNamespaceLocation(fugue_sqlParser::SetNamespaceLocationContext *context) = 0;

    virtual std::any visitDropNamespace(fugue_sqlParser::DropNamespaceContext *context) = 0;

    virtual std::any visitShowNamespaces(fugue_sqlParser::ShowNamespacesContext *context) = 0;

    virtual std::any visitCreateTable(fugue_sqlParser::CreateTableContext *context) = 0;

    virtual std::any visitCreateHiveTable(fugue_sqlParser::CreateHiveTableContext *context) = 0;

    virtual std::any visitCreateTableLike(fugue_sqlParser::CreateTableLikeContext *context) = 0;

    virtual std::any visitReplaceTable(fugue_sqlParser::ReplaceTableContext *context) = 0;

    virtual std::any visitAnalyze(fugue_sqlParser::AnalyzeContext *context) = 0;

    virtual std::any visitAddTableColumns(fugue_sqlParser::AddTableColumnsContext *context) = 0;

    virtual std::any visitRenameTableColumn(fugue_sqlParser::RenameTableColumnContext *context) = 0;

    virtual std::any visitDropTableColumns(fugue_sqlParser::DropTableColumnsContext *context) = 0;

    virtual std::any visitRenameTable(fugue_sqlParser::RenameTableContext *context) = 0;

    virtual std::any visitSetTableProperties(fugue_sqlParser::SetTablePropertiesContext *context) = 0;

    virtual std::any visitUnsetTableProperties(fugue_sqlParser::UnsetTablePropertiesContext *context) = 0;

    virtual std::any visitAlterTableAlterColumn(fugue_sqlParser::AlterTableAlterColumnContext *context) = 0;

    virtual std::any visitHiveChangeColumn(fugue_sqlParser::HiveChangeColumnContext *context) = 0;

    virtual std::any visitHiveReplaceColumns(fugue_sqlParser::HiveReplaceColumnsContext *context) = 0;

    virtual std::any visitSetTableSerDe(fugue_sqlParser::SetTableSerDeContext *context) = 0;

    virtual std::any visitAddTablePartition(fugue_sqlParser::AddTablePartitionContext *context) = 0;

    virtual std::any visitRenameTablePartition(fugue_sqlParser::RenameTablePartitionContext *context) = 0;

    virtual std::any visitDropTablePartitions(fugue_sqlParser::DropTablePartitionsContext *context) = 0;

    virtual std::any visitSetTableLocation(fugue_sqlParser::SetTableLocationContext *context) = 0;

    virtual std::any visitRecoverPartitions(fugue_sqlParser::RecoverPartitionsContext *context) = 0;

    virtual std::any visitDropTable(fugue_sqlParser::DropTableContext *context) = 0;

    virtual std::any visitDropView(fugue_sqlParser::DropViewContext *context) = 0;

    virtual std::any visitCreateView(fugue_sqlParser::CreateViewContext *context) = 0;

    virtual std::any visitCreateTempViewUsing(fugue_sqlParser::CreateTempViewUsingContext *context) = 0;

    virtual std::any visitAlterViewQuery(fugue_sqlParser::AlterViewQueryContext *context) = 0;

    virtual std::any visitCreateFunction(fugue_sqlParser::CreateFunctionContext *context) = 0;

    virtual std::any visitDropFunction(fugue_sqlParser::DropFunctionContext *context) = 0;

    virtual std::any visitExplain(fugue_sqlParser::ExplainContext *context) = 0;

    virtual std::any visitShowTables(fugue_sqlParser::ShowTablesContext *context) = 0;

    virtual std::any visitShowTable(fugue_sqlParser::ShowTableContext *context) = 0;

    virtual std::any visitShowTblProperties(fugue_sqlParser::ShowTblPropertiesContext *context) = 0;

    virtual std::any visitShowColumns(fugue_sqlParser::ShowColumnsContext *context) = 0;

    virtual std::any visitShowViews(fugue_sqlParser::ShowViewsContext *context) = 0;

    virtual std::any visitShowPartitions(fugue_sqlParser::ShowPartitionsContext *context) = 0;

    virtual std::any visitShowFunctions(fugue_sqlParser::ShowFunctionsContext *context) = 0;

    virtual std::any visitShowCreateTable(fugue_sqlParser::ShowCreateTableContext *context) = 0;

    virtual std::any visitShowCurrentNamespace(fugue_sqlParser::ShowCurrentNamespaceContext *context) = 0;

    virtual std::any visitDescribeFunction(fugue_sqlParser::DescribeFunctionContext *context) = 0;

    virtual std::any visitDescribeNamespace(fugue_sqlParser::DescribeNamespaceContext *context) = 0;

    virtual std::any visitDescribeRelation(fugue_sqlParser::DescribeRelationContext *context) = 0;

    virtual std::any visitDescribeQuery(fugue_sqlParser::DescribeQueryContext *context) = 0;

    virtual std::any visitCommentNamespace(fugue_sqlParser::CommentNamespaceContext *context) = 0;

    virtual std::any visitCommentTable(fugue_sqlParser::CommentTableContext *context) = 0;

    virtual std::any visitRefreshTable(fugue_sqlParser::RefreshTableContext *context) = 0;

    virtual std::any visitRefreshResource(fugue_sqlParser::RefreshResourceContext *context) = 0;

    virtual std::any visitCacheTable(fugue_sqlParser::CacheTableContext *context) = 0;

    virtual std::any visitUncacheTable(fugue_sqlParser::UncacheTableContext *context) = 0;

    virtual std::any visitClearCache(fugue_sqlParser::ClearCacheContext *context) = 0;

    virtual std::any visitLoadData(fugue_sqlParser::LoadDataContext *context) = 0;

    virtual std::any visitTruncateTable(fugue_sqlParser::TruncateTableContext *context) = 0;

    virtual std::any visitRepairTable(fugue_sqlParser::RepairTableContext *context) = 0;

    virtual std::any visitManageResource(fugue_sqlParser::ManageResourceContext *context) = 0;

    virtual std::any visitFailNativeCommand(fugue_sqlParser::FailNativeCommandContext *context) = 0;

    virtual std::any visitSetConfiguration(fugue_sqlParser::SetConfigurationContext *context) = 0;

    virtual std::any visitResetConfiguration(fugue_sqlParser::ResetConfigurationContext *context) = 0;

    virtual std::any visitUnsupportedHiveNativeCommands(fugue_sqlParser::UnsupportedHiveNativeCommandsContext *context) = 0;

    virtual std::any visitCreateTableHeader(fugue_sqlParser::CreateTableHeaderContext *context) = 0;

    virtual std::any visitReplaceTableHeader(fugue_sqlParser::ReplaceTableHeaderContext *context) = 0;

    virtual std::any visitBucketSpec(fugue_sqlParser::BucketSpecContext *context) = 0;

    virtual std::any visitSkewSpec(fugue_sqlParser::SkewSpecContext *context) = 0;

    virtual std::any visitLocationSpec(fugue_sqlParser::LocationSpecContext *context) = 0;

    virtual std::any visitCommentSpec(fugue_sqlParser::CommentSpecContext *context) = 0;

    virtual std::any visitQuery(fugue_sqlParser::QueryContext *context) = 0;

    virtual std::any visitInsertOverwriteTable(fugue_sqlParser::InsertOverwriteTableContext *context) = 0;

    virtual std::any visitInsertIntoTable(fugue_sqlParser::InsertIntoTableContext *context) = 0;

    virtual std::any visitInsertOverwriteHiveDir(fugue_sqlParser::InsertOverwriteHiveDirContext *context) = 0;

    virtual std::any visitInsertOverwriteDir(fugue_sqlParser::InsertOverwriteDirContext *context) = 0;

    virtual std::any visitPartitionSpecLocation(fugue_sqlParser::PartitionSpecLocationContext *context) = 0;

    virtual std::any visitPartitionSpec(fugue_sqlParser::PartitionSpecContext *context) = 0;

    virtual std::any visitPartitionVal(fugue_sqlParser::PartitionValContext *context) = 0;

    virtual std::any visitTheNamespace(fugue_sqlParser::TheNamespaceContext *context) = 0;

    virtual std::any visitDescribeFuncName(fugue_sqlParser::DescribeFuncNameContext *context) = 0;

    virtual std::any visitDescribeColName(fugue_sqlParser::DescribeColNameContext *context) = 0;

    virtual std::any visitCtes(fugue_sqlParser::CtesContext *context) = 0;

    virtual std::any visitNamedQuery(fugue_sqlParser::NamedQueryContext *context) = 0;

    virtual std::any visitTableProvider(fugue_sqlParser::TableProviderContext *context) = 0;

    virtual std::any visitCreateTableClauses(fugue_sqlParser::CreateTableClausesContext *context) = 0;

    virtual std::any visitTablePropertyList(fugue_sqlParser::TablePropertyListContext *context) = 0;

    virtual std::any visitTableProperty(fugue_sqlParser::TablePropertyContext *context) = 0;

    virtual std::any visitTablePropertyKey(fugue_sqlParser::TablePropertyKeyContext *context) = 0;

    virtual std::any visitTablePropertyValue(fugue_sqlParser::TablePropertyValueContext *context) = 0;

    virtual std::any visitConstantList(fugue_sqlParser::ConstantListContext *context) = 0;

    virtual std::any visitNestedConstantList(fugue_sqlParser::NestedConstantListContext *context) = 0;

    virtual std::any visitCreateFileFormat(fugue_sqlParser::CreateFileFormatContext *context) = 0;

    virtual std::any visitTableFileFormat(fugue_sqlParser::TableFileFormatContext *context) = 0;

    virtual std::any visitGenericFileFormat(fugue_sqlParser::GenericFileFormatContext *context) = 0;

    virtual std::any visitStorageHandler(fugue_sqlParser::StorageHandlerContext *context) = 0;

    virtual std::any visitResource(fugue_sqlParser::ResourceContext *context) = 0;

    virtual std::any visitSingleInsertQuery(fugue_sqlParser::SingleInsertQueryContext *context) = 0;

    virtual std::any visitMultiInsertQuery(fugue_sqlParser::MultiInsertQueryContext *context) = 0;

    virtual std::any visitDeleteFromTable(fugue_sqlParser::DeleteFromTableContext *context) = 0;

    virtual std::any visitUpdateTable(fugue_sqlParser::UpdateTableContext *context) = 0;

    virtual std::any visitMergeIntoTable(fugue_sqlParser::MergeIntoTableContext *context) = 0;

    virtual std::any visitQueryOrganization(fugue_sqlParser::QueryOrganizationContext *context) = 0;

    virtual std::any visitMultiInsertQueryBody(fugue_sqlParser::MultiInsertQueryBodyContext *context) = 0;

    virtual std::any visitQueryTermDefault(fugue_sqlParser::QueryTermDefaultContext *context) = 0;

    virtual std::any visitFugueTerm(fugue_sqlParser::FugueTermContext *context) = 0;

    virtual std::any visitSetOperation(fugue_sqlParser::SetOperationContext *context) = 0;

    virtual std::any visitQueryPrimaryDefault(fugue_sqlParser::QueryPrimaryDefaultContext *context) = 0;

    virtual std::any visitFromStmt(fugue_sqlParser::FromStmtContext *context) = 0;

    virtual std::any visitTable(fugue_sqlParser::TableContext *context) = 0;

    virtual std::any visitInlineTableDefault1(fugue_sqlParser::InlineTableDefault1Context *context) = 0;

    virtual std::any visitSortItem(fugue_sqlParser::SortItemContext *context) = 0;

    virtual std::any visitFromStatement(fugue_sqlParser::FromStatementContext *context) = 0;

    virtual std::any visitFromStatementBody(fugue_sqlParser::FromStatementBodyContext *context) = 0;

    virtual std::any visitTransformQuerySpecification(fugue_sqlParser::TransformQuerySpecificationContext *context) = 0;

    virtual std::any visitRegularQuerySpecification(fugue_sqlParser::RegularQuerySpecificationContext *context) = 0;

    virtual std::any visitOptionalFromClause(fugue_sqlParser::OptionalFromClauseContext *context) = 0;

    virtual std::any visitTransformClause(fugue_sqlParser::TransformClauseContext *context) = 0;

    virtual std::any visitSelectClause(fugue_sqlParser::SelectClauseContext *context) = 0;

    virtual std::any visitSetClause(fugue_sqlParser::SetClauseContext *context) = 0;

    virtual std::any visitMatchedClause(fugue_sqlParser::MatchedClauseContext *context) = 0;

    virtual std::any visitNotMatchedClause(fugue_sqlParser::NotMatchedClauseContext *context) = 0;

    virtual std::any visitMatchedAction(fugue_sqlParser::MatchedActionContext *context) = 0;

    virtual std::any visitNotMatchedAction(fugue_sqlParser::NotMatchedActionContext *context) = 0;

    virtual std::any visitAssignmentList(fugue_sqlParser::AssignmentListContext *context) = 0;

    virtual std::any visitAssignment(fugue_sqlParser::AssignmentContext *context) = 0;

    virtual std::any visitWhereClause(fugue_sqlParser::WhereClauseContext *context) = 0;

    virtual std::any visitHavingClause(fugue_sqlParser::HavingClauseContext *context) = 0;

    virtual std::any visitHint(fugue_sqlParser::HintContext *context) = 0;

    virtual std::any visitHintStatement(fugue_sqlParser::HintStatementContext *context) = 0;

    virtual std::any visitFromClause(fugue_sqlParser::FromClauseContext *context) = 0;

    virtual std::any visitAggregationClause(fugue_sqlParser::AggregationClauseContext *context) = 0;

    virtual std::any visitGroupingSet(fugue_sqlParser::GroupingSetContext *context) = 0;

    virtual std::any visitPivotClause(fugue_sqlParser::PivotClauseContext *context) = 0;

    virtual std::any visitPivotColumn(fugue_sqlParser::PivotColumnContext *context) = 0;

    virtual std::any visitPivotValue(fugue_sqlParser::PivotValueContext *context) = 0;

    virtual std::any visitLateralView(fugue_sqlParser::LateralViewContext *context) = 0;

    virtual std::any visitSetQuantifier(fugue_sqlParser::SetQuantifierContext *context) = 0;

    virtual std::any visitRelation(fugue_sqlParser::RelationContext *context) = 0;

    virtual std::any visitJoinRelation(fugue_sqlParser::JoinRelationContext *context) = 0;

    virtual std::any visitJoinType(fugue_sqlParser::JoinTypeContext *context) = 0;

    virtual std::any visitJoinCriteria(fugue_sqlParser::JoinCriteriaContext *context) = 0;

    virtual std::any visitSample(fugue_sqlParser::SampleContext *context) = 0;

    virtual std::any visitSampleByPercentile(fugue_sqlParser::SampleByPercentileContext *context) = 0;

    virtual std::any visitSampleByRows(fugue_sqlParser::SampleByRowsContext *context) = 0;

    virtual std::any visitSampleByBucket(fugue_sqlParser::SampleByBucketContext *context) = 0;

    virtual std::any visitSampleByBytes(fugue_sqlParser::SampleByBytesContext *context) = 0;

    virtual std::any visitIdentifierList(fugue_sqlParser::IdentifierListContext *context) = 0;

    virtual std::any visitIdentifierSeq(fugue_sqlParser::IdentifierSeqContext *context) = 0;

    virtual std::any visitOrderedIdentifierList(fugue_sqlParser::OrderedIdentifierListContext *context) = 0;

    virtual std::any visitOrderedIdentifier(fugue_sqlParser::OrderedIdentifierContext *context) = 0;

    virtual std::any visitIdentifierCommentList(fugue_sqlParser::IdentifierCommentListContext *context) = 0;

    virtual std::any visitIdentifierComment(fugue_sqlParser::IdentifierCommentContext *context) = 0;

    virtual std::any visitTableName(fugue_sqlParser::TableNameContext *context) = 0;

    virtual std::any visitAliasedQuery(fugue_sqlParser::AliasedQueryContext *context) = 0;

    virtual std::any visitAliasedRelation(fugue_sqlParser::AliasedRelationContext *context) = 0;

    virtual std::any visitInlineTableDefault2(fugue_sqlParser::InlineTableDefault2Context *context) = 0;

    virtual std::any visitTableValuedFunction(fugue_sqlParser::TableValuedFunctionContext *context) = 0;

    virtual std::any visitInlineTable(fugue_sqlParser::InlineTableContext *context) = 0;

    virtual std::any visitFunctionTable(fugue_sqlParser::FunctionTableContext *context) = 0;

    virtual std::any visitTableAlias(fugue_sqlParser::TableAliasContext *context) = 0;

    virtual std::any visitRowFormatSerde(fugue_sqlParser::RowFormatSerdeContext *context) = 0;

    virtual std::any visitRowFormatDelimited(fugue_sqlParser::RowFormatDelimitedContext *context) = 0;

    virtual std::any visitMultipartIdentifierList(fugue_sqlParser::MultipartIdentifierListContext *context) = 0;

    virtual std::any visitMultipartIdentifier(fugue_sqlParser::MultipartIdentifierContext *context) = 0;

    virtual std::any visitTableIdentifier(fugue_sqlParser::TableIdentifierContext *context) = 0;

    virtual std::any visitFunctionIdentifier(fugue_sqlParser::FunctionIdentifierContext *context) = 0;

    virtual std::any visitNamedExpression(fugue_sqlParser::NamedExpressionContext *context) = 0;

    virtual std::any visitNamedExpressionSeq(fugue_sqlParser::NamedExpressionSeqContext *context) = 0;

    virtual std::any visitTransformList(fugue_sqlParser::TransformListContext *context) = 0;

    virtual std::any visitIdentityTransform(fugue_sqlParser::IdentityTransformContext *context) = 0;

    virtual std::any visitApplyTransform(fugue_sqlParser::ApplyTransformContext *context) = 0;

    virtual std::any visitTransformArgument(fugue_sqlParser::TransformArgumentContext *context) = 0;

    virtual std::any visitExpression(fugue_sqlParser::ExpressionContext *context) = 0;

    virtual std::any visitLogicalNot(fugue_sqlParser::LogicalNotContext *context) = 0;

    virtual std::any visitPredicated(fugue_sqlParser::PredicatedContext *context) = 0;

    virtual std::any visitExists(fugue_sqlParser::ExistsContext *context) = 0;

    virtual std::any visitLogicalBinary(fugue_sqlParser::LogicalBinaryContext *context) = 0;

    virtual std::any visitPredicate(fugue_sqlParser::PredicateContext *context) = 0;

    virtual std::any visitValueExpressionDefault(fugue_sqlParser::ValueExpressionDefaultContext *context) = 0;

    virtual std::any visitComparison(fugue_sqlParser::ComparisonContext *context) = 0;

    virtual std::any visitArithmeticBinary(fugue_sqlParser::ArithmeticBinaryContext *context) = 0;

    virtual std::any visitArithmeticUnary(fugue_sqlParser::ArithmeticUnaryContext *context) = 0;

    virtual std::any visitStruct(fugue_sqlParser::StructContext *context) = 0;

    virtual std::any visitDereference(fugue_sqlParser::DereferenceContext *context) = 0;

    virtual std::any visitSimpleCase(fugue_sqlParser::SimpleCaseContext *context) = 0;

    virtual std::any visitColumnReference(fugue_sqlParser::ColumnReferenceContext *context) = 0;

    virtual std::any visitRowConstructor(fugue_sqlParser::RowConstructorContext *context) = 0;

    virtual std::any visitLast(fugue_sqlParser::LastContext *context) = 0;

    virtual std::any visitStar(fugue_sqlParser::StarContext *context) = 0;

    virtual std::any visitOverlay(fugue_sqlParser::OverlayContext *context) = 0;

    virtual std::any visitSubscript(fugue_sqlParser::SubscriptContext *context) = 0;

    virtual std::any visitSubqueryExpression(fugue_sqlParser::SubqueryExpressionContext *context) = 0;

    virtual std::any visitSubstring(fugue_sqlParser::SubstringContext *context) = 0;

    virtual std::any visitCurrentDatetime(fugue_sqlParser::CurrentDatetimeContext *context) = 0;

    virtual std::any visitCast(fugue_sqlParser::CastContext *context) = 0;

    virtual std::any visitConstantDefault(fugue_sqlParser::ConstantDefaultContext *context) = 0;

    virtual std::any visitLambda(fugue_sqlParser::LambdaContext *context) = 0;

    virtual std::any visitParenthesizedExpression(fugue_sqlParser::ParenthesizedExpressionContext *context) = 0;

    virtual std::any visitExtract(fugue_sqlParser::ExtractContext *context) = 0;

    virtual std::any visitTrim(fugue_sqlParser::TrimContext *context) = 0;

    virtual std::any visitFunctionCall(fugue_sqlParser::FunctionCallContext *context) = 0;

    virtual std::any visitSearchedCase(fugue_sqlParser::SearchedCaseContext *context) = 0;

    virtual std::any visitPosition(fugue_sqlParser::PositionContext *context) = 0;

    virtual std::any visitFirst(fugue_sqlParser::FirstContext *context) = 0;

    virtual std::any visitNullLiteral(fugue_sqlParser::NullLiteralContext *context) = 0;

    virtual std::any visitIntervalLiteral(fugue_sqlParser::IntervalLiteralContext *context) = 0;

    virtual std::any visitTypeConstructor(fugue_sqlParser::TypeConstructorContext *context) = 0;

    virtual std::any visitNumericLiteral(fugue_sqlParser::NumericLiteralContext *context) = 0;

    virtual std::any visitBooleanLiteral(fugue_sqlParser::BooleanLiteralContext *context) = 0;

    virtual std::any visitStringLiteral(fugue_sqlParser::StringLiteralContext *context) = 0;

    virtual std::any visitComparisonOperator(fugue_sqlParser::ComparisonOperatorContext *context) = 0;

    virtual std::any visitComparisonEqualOperator(fugue_sqlParser::ComparisonEqualOperatorContext *context) = 0;

    virtual std::any visitArithmeticOperator(fugue_sqlParser::ArithmeticOperatorContext *context) = 0;

    virtual std::any visitPredicateOperator(fugue_sqlParser::PredicateOperatorContext *context) = 0;

    virtual std::any visitBooleanValue(fugue_sqlParser::BooleanValueContext *context) = 0;

    virtual std::any visitInterval(fugue_sqlParser::IntervalContext *context) = 0;

    virtual std::any visitErrorCapturingMultiUnitsInterval(fugue_sqlParser::ErrorCapturingMultiUnitsIntervalContext *context) = 0;

    virtual std::any visitMultiUnitsInterval(fugue_sqlParser::MultiUnitsIntervalContext *context) = 0;

    virtual std::any visitErrorCapturingUnitToUnitInterval(fugue_sqlParser::ErrorCapturingUnitToUnitIntervalContext *context) = 0;

    virtual std::any visitUnitToUnitInterval(fugue_sqlParser::UnitToUnitIntervalContext *context) = 0;

    virtual std::any visitIntervalValue(fugue_sqlParser::IntervalValueContext *context) = 0;

    virtual std::any visitIntervalUnit(fugue_sqlParser::IntervalUnitContext *context) = 0;

    virtual std::any visitColPosition(fugue_sqlParser::ColPositionContext *context) = 0;

    virtual std::any visitComplexDataType(fugue_sqlParser::ComplexDataTypeContext *context) = 0;

    virtual std::any visitPrimitiveDataType(fugue_sqlParser::PrimitiveDataTypeContext *context) = 0;

    virtual std::any visitQualifiedColTypeWithPositionList(fugue_sqlParser::QualifiedColTypeWithPositionListContext *context) = 0;

    virtual std::any visitQualifiedColTypeWithPosition(fugue_sqlParser::QualifiedColTypeWithPositionContext *context) = 0;

    virtual std::any visitColTypeList(fugue_sqlParser::ColTypeListContext *context) = 0;

    virtual std::any visitColType(fugue_sqlParser::ColTypeContext *context) = 0;

    virtual std::any visitComplexColTypeList(fugue_sqlParser::ComplexColTypeListContext *context) = 0;

    virtual std::any visitComplexColType(fugue_sqlParser::ComplexColTypeContext *context) = 0;

    virtual std::any visitWhenClause(fugue_sqlParser::WhenClauseContext *context) = 0;

    virtual std::any visitWindowClause(fugue_sqlParser::WindowClauseContext *context) = 0;

    virtual std::any visitNamedWindow(fugue_sqlParser::NamedWindowContext *context) = 0;

    virtual std::any visitWindowRef(fugue_sqlParser::WindowRefContext *context) = 0;

    virtual std::any visitWindowDef(fugue_sqlParser::WindowDefContext *context) = 0;

    virtual std::any visitWindowFrame(fugue_sqlParser::WindowFrameContext *context) = 0;

    virtual std::any visitFrameBound(fugue_sqlParser::FrameBoundContext *context) = 0;

    virtual std::any visitQualifiedNameList(fugue_sqlParser::QualifiedNameListContext *context) = 0;

    virtual std::any visitFunctionName(fugue_sqlParser::FunctionNameContext *context) = 0;

    virtual std::any visitQualifiedName(fugue_sqlParser::QualifiedNameContext *context) = 0;

    virtual std::any visitErrorCapturingIdentifier(fugue_sqlParser::ErrorCapturingIdentifierContext *context) = 0;

    virtual std::any visitErrorIdent(fugue_sqlParser::ErrorIdentContext *context) = 0;

    virtual std::any visitIdentifier(fugue_sqlParser::IdentifierContext *context) = 0;

    virtual std::any visitUnquotedIdentifier(fugue_sqlParser::UnquotedIdentifierContext *context) = 0;

    virtual std::any visitQuotedIdentifierAlternative(fugue_sqlParser::QuotedIdentifierAlternativeContext *context) = 0;

    virtual std::any visitQuotedIdentifier(fugue_sqlParser::QuotedIdentifierContext *context) = 0;

    virtual std::any visitExponentLiteral(fugue_sqlParser::ExponentLiteralContext *context) = 0;

    virtual std::any visitDecimalLiteral(fugue_sqlParser::DecimalLiteralContext *context) = 0;

    virtual std::any visitLegacyDecimalLiteral(fugue_sqlParser::LegacyDecimalLiteralContext *context) = 0;

    virtual std::any visitIntegerLiteral(fugue_sqlParser::IntegerLiteralContext *context) = 0;

    virtual std::any visitBigIntLiteral(fugue_sqlParser::BigIntLiteralContext *context) = 0;

    virtual std::any visitSmallIntLiteral(fugue_sqlParser::SmallIntLiteralContext *context) = 0;

    virtual std::any visitTinyIntLiteral(fugue_sqlParser::TinyIntLiteralContext *context) = 0;

    virtual std::any visitDoubleLiteral(fugue_sqlParser::DoubleLiteralContext *context) = 0;

    virtual std::any visitBigDecimalLiteral(fugue_sqlParser::BigDecimalLiteralContext *context) = 0;

    virtual std::any visitAlterColumnAction(fugue_sqlParser::AlterColumnActionContext *context) = 0;

    virtual std::any visitAnsiNonReserved(fugue_sqlParser::AnsiNonReservedContext *context) = 0;

    virtual std::any visitStrictNonReserved(fugue_sqlParser::StrictNonReservedContext *context) = 0;

    virtual std::any visitNonReserved(fugue_sqlParser::NonReservedContext *context) = 0;


};

