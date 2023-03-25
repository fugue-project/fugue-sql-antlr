
// Generated from fugue_sql.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "fugue_sqlVisitor.h"


/**
 * This class provides an empty implementation of fugue_sqlVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  fugue_sqlBaseVisitor : public fugue_sqlVisitor {
public:

  virtual std::any visitFugueLanguage(fugue_sqlParser::FugueLanguageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSingleStatement(fugue_sqlParser::FugueSingleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSingleTask(fugue_sqlParser::FugueSingleTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueNestableTask(fugue_sqlParser::FugueNestableTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueNestableTaskCollectionNoSelect(fugue_sqlParser::FugueNestableTaskCollectionNoSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueTransformTask(fugue_sqlParser::FugueTransformTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueProcessTask(fugue_sqlParser::FugueProcessTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSaveAndUseTask(fugue_sqlParser::FugueSaveAndUseTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueRenameColumnsTask(fugue_sqlParser::FugueRenameColumnsTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueAlterColumnsTask(fugue_sqlParser::FugueAlterColumnsTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueDropColumnsTask(fugue_sqlParser::FugueDropColumnsTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueDropnaTask(fugue_sqlParser::FugueDropnaTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueFillnaTask(fugue_sqlParser::FugueFillnaTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSampleTask(fugue_sqlParser::FugueSampleTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueTakeTask(fugue_sqlParser::FugueTakeTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueZipTask(fugue_sqlParser::FugueZipTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueCreateTask(fugue_sqlParser::FugueCreateTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueCreateDataTask(fugue_sqlParser::FugueCreateDataTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueLoadTask(fugue_sqlParser::FugueLoadTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueOutputTask(fugue_sqlParser::FugueOutputTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuguePrintTask(fugue_sqlParser::FuguePrintTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSaveTask(fugue_sqlParser::FugueSaveTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueOutputTransformTask(fugue_sqlParser::FugueOutputTransformTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueModuleTask(fugue_sqlParser::FugueModuleTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSqlEngine(fugue_sqlParser::FugueSqlEngineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSingleFile(fugue_sqlParser::FugueSingleFileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueLoadColumns(fugue_sqlParser::FugueLoadColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSaveMode(fugue_sqlParser::FugueSaveModeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueFileFormat(fugue_sqlParser::FugueFileFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuguePath(fugue_sqlParser::FuguePathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuguePaths(fugue_sqlParser::FuguePathsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueCheckpointWeak(fugue_sqlParser::FugueCheckpointWeakContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueCheckpointStrong(fugue_sqlParser::FugueCheckpointStrongContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueCheckpointDeterministic(fugue_sqlParser::FugueCheckpointDeterministicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueCheckpointNamespace(fugue_sqlParser::FugueCheckpointNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueYield(fugue_sqlParser::FugueYieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueBroadcast(fugue_sqlParser::FugueBroadcastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueDataFramesList(fugue_sqlParser::FugueDataFramesListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueDataFramesDict(fugue_sqlParser::FugueDataFramesDictContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueDataFramePair(fugue_sqlParser::FugueDataFramePairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueDataFrameSource(fugue_sqlParser::FugueDataFrameSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueDataFrameNested(fugue_sqlParser::FugueDataFrameNestedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueDataFrameMember(fugue_sqlParser::FugueDataFrameMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueAssignment(fugue_sqlParser::FugueAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueAssignmentSign(fugue_sqlParser::FugueAssignmentSignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSingleOutputExtensionCommonWild(fugue_sqlParser::FugueSingleOutputExtensionCommonWildContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSingleOutputExtensionCommon(fugue_sqlParser::FugueSingleOutputExtensionCommonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueExtension(fugue_sqlParser::FugueExtensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSampleMethod(fugue_sqlParser::FugueSampleMethodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueZipType(fugue_sqlParser::FugueZipTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuguePrepartition(fugue_sqlParser::FuguePrepartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuguePartitionAlgo(fugue_sqlParser::FuguePartitionAlgoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuguePartitionNum(fugue_sqlParser::FuguePartitionNumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuguePartitionNumber(fugue_sqlParser::FuguePartitionNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueParamsPairs(fugue_sqlParser::FugueParamsPairsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueParamsObj(fugue_sqlParser::FugueParamsObjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueCols(fugue_sqlParser::FugueColsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueColsSort(fugue_sqlParser::FugueColsSortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueColSort(fugue_sqlParser::FugueColSortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueColumnIdentifier(fugue_sqlParser::FugueColumnIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueRenameExpression(fugue_sqlParser::FugueRenameExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueWildSchema(fugue_sqlParser::FugueWildSchemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueWildSchemaPair(fugue_sqlParser::FugueWildSchemaPairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSchemaOp(fugue_sqlParser::FugueSchemaOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSchema(fugue_sqlParser::FugueSchemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSchemaPair(fugue_sqlParser::FugueSchemaPairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSchemaKey(fugue_sqlParser::FugueSchemaKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSchemaSimpleType(fugue_sqlParser::FugueSchemaSimpleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSchemaListType(fugue_sqlParser::FugueSchemaListTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSchemaStructType(fugue_sqlParser::FugueSchemaStructTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueSchemaMapType(fugue_sqlParser::FugueSchemaMapTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueRenamePair(fugue_sqlParser::FugueRenamePairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueJson(fugue_sqlParser::FugueJsonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueJsonObj(fugue_sqlParser::FugueJsonObjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueJsonPairs(fugue_sqlParser::FugueJsonPairsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueJsonPair(fugue_sqlParser::FugueJsonPairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueJsonKey(fugue_sqlParser::FugueJsonKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueJsonArray(fugue_sqlParser::FugueJsonArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueJsonValue(fugue_sqlParser::FugueJsonValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueJsonNumber(fugue_sqlParser::FugueJsonNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueJsonString(fugue_sqlParser::FugueJsonStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueJsonBool(fugue_sqlParser::FugueJsonBoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueJsonNull(fugue_sqlParser::FugueJsonNullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueIdentifier(fugue_sqlParser::FugueIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleStatement(fugue_sqlParser::SingleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleExpression(fugue_sqlParser::SingleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleTableIdentifier(fugue_sqlParser::SingleTableIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleMultipartIdentifier(fugue_sqlParser::SingleMultipartIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleFunctionIdentifier(fugue_sqlParser::SingleFunctionIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleDataType(fugue_sqlParser::SingleDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleTableSchema(fugue_sqlParser::SingleTableSchemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementDefault(fugue_sqlParser::StatementDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDmlStatement(fugue_sqlParser::DmlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUse(fugue_sqlParser::UseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateNamespace(fugue_sqlParser::CreateNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetNamespaceProperties(fugue_sqlParser::SetNamespacePropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetNamespaceLocation(fugue_sqlParser::SetNamespaceLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropNamespace(fugue_sqlParser::DropNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowNamespaces(fugue_sqlParser::ShowNamespacesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateTable(fugue_sqlParser::CreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateHiveTable(fugue_sqlParser::CreateHiveTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateTableLike(fugue_sqlParser::CreateTableLikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReplaceTable(fugue_sqlParser::ReplaceTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnalyze(fugue_sqlParser::AnalyzeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddTableColumns(fugue_sqlParser::AddTableColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRenameTableColumn(fugue_sqlParser::RenameTableColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropTableColumns(fugue_sqlParser::DropTableColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRenameTable(fugue_sqlParser::RenameTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetTableProperties(fugue_sqlParser::SetTablePropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsetTableProperties(fugue_sqlParser::UnsetTablePropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterTableAlterColumn(fugue_sqlParser::AlterTableAlterColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHiveChangeColumn(fugue_sqlParser::HiveChangeColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHiveReplaceColumns(fugue_sqlParser::HiveReplaceColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetTableSerDe(fugue_sqlParser::SetTableSerDeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddTablePartition(fugue_sqlParser::AddTablePartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRenameTablePartition(fugue_sqlParser::RenameTablePartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropTablePartitions(fugue_sqlParser::DropTablePartitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetTableLocation(fugue_sqlParser::SetTableLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecoverPartitions(fugue_sqlParser::RecoverPartitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropTable(fugue_sqlParser::DropTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropView(fugue_sqlParser::DropViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateView(fugue_sqlParser::CreateViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateTempViewUsing(fugue_sqlParser::CreateTempViewUsingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterViewQuery(fugue_sqlParser::AlterViewQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateFunction(fugue_sqlParser::CreateFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropFunction(fugue_sqlParser::DropFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplain(fugue_sqlParser::ExplainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowTables(fugue_sqlParser::ShowTablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowTable(fugue_sqlParser::ShowTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowTblProperties(fugue_sqlParser::ShowTblPropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowColumns(fugue_sqlParser::ShowColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowViews(fugue_sqlParser::ShowViewsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowPartitions(fugue_sqlParser::ShowPartitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowFunctions(fugue_sqlParser::ShowFunctionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowCreateTable(fugue_sqlParser::ShowCreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowCurrentNamespace(fugue_sqlParser::ShowCurrentNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescribeFunction(fugue_sqlParser::DescribeFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescribeNamespace(fugue_sqlParser::DescribeNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescribeRelation(fugue_sqlParser::DescribeRelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescribeQuery(fugue_sqlParser::DescribeQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommentNamespace(fugue_sqlParser::CommentNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommentTable(fugue_sqlParser::CommentTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRefreshTable(fugue_sqlParser::RefreshTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRefreshResource(fugue_sqlParser::RefreshResourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCacheTable(fugue_sqlParser::CacheTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUncacheTable(fugue_sqlParser::UncacheTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClearCache(fugue_sqlParser::ClearCacheContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoadData(fugue_sqlParser::LoadDataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTruncateTable(fugue_sqlParser::TruncateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepairTable(fugue_sqlParser::RepairTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitManageResource(fugue_sqlParser::ManageResourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFailNativeCommand(fugue_sqlParser::FailNativeCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetConfiguration(fugue_sqlParser::SetConfigurationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResetConfiguration(fugue_sqlParser::ResetConfigurationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsupportedHiveNativeCommands(fugue_sqlParser::UnsupportedHiveNativeCommandsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateTableHeader(fugue_sqlParser::CreateTableHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReplaceTableHeader(fugue_sqlParser::ReplaceTableHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBucketSpec(fugue_sqlParser::BucketSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSkewSpec(fugue_sqlParser::SkewSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocationSpec(fugue_sqlParser::LocationSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommentSpec(fugue_sqlParser::CommentSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery(fugue_sqlParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsertOverwriteTable(fugue_sqlParser::InsertOverwriteTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsertIntoTable(fugue_sqlParser::InsertIntoTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsertOverwriteHiveDir(fugue_sqlParser::InsertOverwriteHiveDirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsertOverwriteDir(fugue_sqlParser::InsertOverwriteDirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionSpecLocation(fugue_sqlParser::PartitionSpecLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionSpec(fugue_sqlParser::PartitionSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionVal(fugue_sqlParser::PartitionValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTheNamespace(fugue_sqlParser::TheNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescribeFuncName(fugue_sqlParser::DescribeFuncNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescribeColName(fugue_sqlParser::DescribeColNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCtes(fugue_sqlParser::CtesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedQuery(fugue_sqlParser::NamedQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableProvider(fugue_sqlParser::TableProviderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateTableClauses(fugue_sqlParser::CreateTableClausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablePropertyList(fugue_sqlParser::TablePropertyListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableProperty(fugue_sqlParser::TablePropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablePropertyKey(fugue_sqlParser::TablePropertyKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablePropertyValue(fugue_sqlParser::TablePropertyValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantList(fugue_sqlParser::ConstantListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNestedConstantList(fugue_sqlParser::NestedConstantListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateFileFormat(fugue_sqlParser::CreateFileFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableFileFormat(fugue_sqlParser::TableFileFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenericFileFormat(fugue_sqlParser::GenericFileFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStorageHandler(fugue_sqlParser::StorageHandlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResource(fugue_sqlParser::ResourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleInsertQuery(fugue_sqlParser::SingleInsertQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiInsertQuery(fugue_sqlParser::MultiInsertQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeleteFromTable(fugue_sqlParser::DeleteFromTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdateTable(fugue_sqlParser::UpdateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMergeIntoTable(fugue_sqlParser::MergeIntoTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryOrganization(fugue_sqlParser::QueryOrganizationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiInsertQueryBody(fugue_sqlParser::MultiInsertQueryBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryTermDefault(fugue_sqlParser::QueryTermDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFugueTerm(fugue_sqlParser::FugueTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetOperation(fugue_sqlParser::SetOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryPrimaryDefault(fugue_sqlParser::QueryPrimaryDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFromStmt(fugue_sqlParser::FromStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable(fugue_sqlParser::TableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineTableDefault1(fugue_sqlParser::InlineTableDefault1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSortItem(fugue_sqlParser::SortItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFromStatement(fugue_sqlParser::FromStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFromStatementBody(fugue_sqlParser::FromStatementBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransformQuerySpecification(fugue_sqlParser::TransformQuerySpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRegularQuerySpecification(fugue_sqlParser::RegularQuerySpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionalFromClause(fugue_sqlParser::OptionalFromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransformClause(fugue_sqlParser::TransformClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectClause(fugue_sqlParser::SelectClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetClause(fugue_sqlParser::SetClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatchedClause(fugue_sqlParser::MatchedClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotMatchedClause(fugue_sqlParser::NotMatchedClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatchedAction(fugue_sqlParser::MatchedActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotMatchedAction(fugue_sqlParser::NotMatchedActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentList(fugue_sqlParser::AssignmentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(fugue_sqlParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhereClause(fugue_sqlParser::WhereClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHavingClause(fugue_sqlParser::HavingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHint(fugue_sqlParser::HintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHintStatement(fugue_sqlParser::HintStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFromClause(fugue_sqlParser::FromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggregationClause(fugue_sqlParser::AggregationClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroupingSet(fugue_sqlParser::GroupingSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPivotClause(fugue_sqlParser::PivotClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPivotColumn(fugue_sqlParser::PivotColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPivotValue(fugue_sqlParser::PivotValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLateralView(fugue_sqlParser::LateralViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetQuantifier(fugue_sqlParser::SetQuantifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelation(fugue_sqlParser::RelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoinRelation(fugue_sqlParser::JoinRelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoinType(fugue_sqlParser::JoinTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoinCriteria(fugue_sqlParser::JoinCriteriaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSample(fugue_sqlParser::SampleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSampleByPercentile(fugue_sqlParser::SampleByPercentileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSampleByRows(fugue_sqlParser::SampleByRowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSampleByBucket(fugue_sqlParser::SampleByBucketContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSampleByBytes(fugue_sqlParser::SampleByBytesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierList(fugue_sqlParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierSeq(fugue_sqlParser::IdentifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrderedIdentifierList(fugue_sqlParser::OrderedIdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrderedIdentifier(fugue_sqlParser::OrderedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierCommentList(fugue_sqlParser::IdentifierCommentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierComment(fugue_sqlParser::IdentifierCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableName(fugue_sqlParser::TableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAliasedQuery(fugue_sqlParser::AliasedQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAliasedRelation(fugue_sqlParser::AliasedRelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineTableDefault2(fugue_sqlParser::InlineTableDefault2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableValuedFunction(fugue_sqlParser::TableValuedFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineTable(fugue_sqlParser::InlineTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionTable(fugue_sqlParser::FunctionTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableAlias(fugue_sqlParser::TableAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowFormatSerde(fugue_sqlParser::RowFormatSerdeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowFormatDelimited(fugue_sqlParser::RowFormatDelimitedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultipartIdentifierList(fugue_sqlParser::MultipartIdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultipartIdentifier(fugue_sqlParser::MultipartIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableIdentifier(fugue_sqlParser::TableIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionIdentifier(fugue_sqlParser::FunctionIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedExpression(fugue_sqlParser::NamedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedExpressionSeq(fugue_sqlParser::NamedExpressionSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransformList(fugue_sqlParser::TransformListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentityTransform(fugue_sqlParser::IdentityTransformContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitApplyTransform(fugue_sqlParser::ApplyTransformContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransformArgument(fugue_sqlParser::TransformArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(fugue_sqlParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalNot(fugue_sqlParser::LogicalNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPredicated(fugue_sqlParser::PredicatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExists(fugue_sqlParser::ExistsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalBinary(fugue_sqlParser::LogicalBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPredicate(fugue_sqlParser::PredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueExpressionDefault(fugue_sqlParser::ValueExpressionDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison(fugue_sqlParser::ComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticBinary(fugue_sqlParser::ArithmeticBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticUnary(fugue_sqlParser::ArithmeticUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStruct(fugue_sqlParser::StructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDereference(fugue_sqlParser::DereferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleCase(fugue_sqlParser::SimpleCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnReference(fugue_sqlParser::ColumnReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowConstructor(fugue_sqlParser::RowConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLast(fugue_sqlParser::LastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStar(fugue_sqlParser::StarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOverlay(fugue_sqlParser::OverlayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubscript(fugue_sqlParser::SubscriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubqueryExpression(fugue_sqlParser::SubqueryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubstring(fugue_sqlParser::SubstringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCurrentDatetime(fugue_sqlParser::CurrentDatetimeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCast(fugue_sqlParser::CastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantDefault(fugue_sqlParser::ConstantDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambda(fugue_sqlParser::LambdaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesizedExpression(fugue_sqlParser::ParenthesizedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtract(fugue_sqlParser::ExtractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrim(fugue_sqlParser::TrimContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(fugue_sqlParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearchedCase(fugue_sqlParser::SearchedCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPosition(fugue_sqlParser::PositionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFirst(fugue_sqlParser::FirstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullLiteral(fugue_sqlParser::NullLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalLiteral(fugue_sqlParser::IntervalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeConstructor(fugue_sqlParser::TypeConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumericLiteral(fugue_sqlParser::NumericLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanLiteral(fugue_sqlParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringLiteral(fugue_sqlParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisonOperator(fugue_sqlParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisonEqualOperator(fugue_sqlParser::ComparisonEqualOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticOperator(fugue_sqlParser::ArithmeticOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPredicateOperator(fugue_sqlParser::PredicateOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanValue(fugue_sqlParser::BooleanValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterval(fugue_sqlParser::IntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitErrorCapturingMultiUnitsInterval(fugue_sqlParser::ErrorCapturingMultiUnitsIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiUnitsInterval(fugue_sqlParser::MultiUnitsIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitErrorCapturingUnitToUnitInterval(fugue_sqlParser::ErrorCapturingUnitToUnitIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitToUnitInterval(fugue_sqlParser::UnitToUnitIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalValue(fugue_sqlParser::IntervalValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalUnit(fugue_sqlParser::IntervalUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColPosition(fugue_sqlParser::ColPositionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexDataType(fugue_sqlParser::ComplexDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitiveDataType(fugue_sqlParser::PrimitiveDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedColTypeWithPositionList(fugue_sqlParser::QualifiedColTypeWithPositionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedColTypeWithPosition(fugue_sqlParser::QualifiedColTypeWithPositionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColTypeList(fugue_sqlParser::ColTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColType(fugue_sqlParser::ColTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexColTypeList(fugue_sqlParser::ComplexColTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexColType(fugue_sqlParser::ComplexColTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenClause(fugue_sqlParser::WhenClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindowClause(fugue_sqlParser::WindowClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedWindow(fugue_sqlParser::NamedWindowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindowRef(fugue_sqlParser::WindowRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindowDef(fugue_sqlParser::WindowDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindowFrame(fugue_sqlParser::WindowFrameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrameBound(fugue_sqlParser::FrameBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedNameList(fugue_sqlParser::QualifiedNameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionName(fugue_sqlParser::FunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedName(fugue_sqlParser::QualifiedNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitErrorCapturingIdentifier(fugue_sqlParser::ErrorCapturingIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitErrorIdent(fugue_sqlParser::ErrorIdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(fugue_sqlParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnquotedIdentifier(fugue_sqlParser::UnquotedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuotedIdentifierAlternative(fugue_sqlParser::QuotedIdentifierAlternativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuotedIdentifier(fugue_sqlParser::QuotedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExponentLiteral(fugue_sqlParser::ExponentLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecimalLiteral(fugue_sqlParser::DecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLegacyDecimalLiteral(fugue_sqlParser::LegacyDecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerLiteral(fugue_sqlParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBigIntLiteral(fugue_sqlParser::BigIntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSmallIntLiteral(fugue_sqlParser::SmallIntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTinyIntLiteral(fugue_sqlParser::TinyIntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoubleLiteral(fugue_sqlParser::DoubleLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBigDecimalLiteral(fugue_sqlParser::BigDecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterColumnAction(fugue_sqlParser::AlterColumnActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnsiNonReserved(fugue_sqlParser::AnsiNonReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStrictNonReserved(fugue_sqlParser::StrictNonReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNonReserved(fugue_sqlParser::NonReservedContext *ctx) override {
    return visitChildren(ctx);
  }


};

