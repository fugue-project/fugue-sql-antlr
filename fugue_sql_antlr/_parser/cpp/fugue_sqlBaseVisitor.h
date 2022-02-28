
// Generated from fugue_sql.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "fugue_sqlVisitor.h"


/**
 * This class provides an empty implementation of fugue_sqlVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  fugue_sqlBaseVisitor : public fugue_sqlVisitor {
public:

  virtual antlrcpp::Any visitFugueLanguage(fugue_sqlParser::FugueLanguageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSingleStatement(fugue_sqlParser::FugueSingleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSingleTask(fugue_sqlParser::FugueSingleTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueNestableTask(fugue_sqlParser::FugueNestableTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueNestableTaskCollectionNoSelect(fugue_sqlParser::FugueNestableTaskCollectionNoSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueTransformTask(fugue_sqlParser::FugueTransformTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueProcessTask(fugue_sqlParser::FugueProcessTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSaveAndUseTask(fugue_sqlParser::FugueSaveAndUseTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueRenameColumnsTask(fugue_sqlParser::FugueRenameColumnsTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueAlterColumnsTask(fugue_sqlParser::FugueAlterColumnsTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueDropColumnsTask(fugue_sqlParser::FugueDropColumnsTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueDropnaTask(fugue_sqlParser::FugueDropnaTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueFillnaTask(fugue_sqlParser::FugueFillnaTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSampleTask(fugue_sqlParser::FugueSampleTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueTakeTask(fugue_sqlParser::FugueTakeTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueZipTask(fugue_sqlParser::FugueZipTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueCreateTask(fugue_sqlParser::FugueCreateTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueCreateDataTask(fugue_sqlParser::FugueCreateDataTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueLoadTask(fugue_sqlParser::FugueLoadTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueOutputTask(fugue_sqlParser::FugueOutputTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuguePrintTask(fugue_sqlParser::FuguePrintTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSaveTask(fugue_sqlParser::FugueSaveTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueOutputTransformTask(fugue_sqlParser::FugueOutputTransformTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueModuleTask(fugue_sqlParser::FugueModuleTaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSqlEngine(fugue_sqlParser::FugueSqlEngineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSingleFile(fugue_sqlParser::FugueSingleFileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueLoadColumns(fugue_sqlParser::FugueLoadColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSaveMode(fugue_sqlParser::FugueSaveModeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueFileFormat(fugue_sqlParser::FugueFileFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuguePath(fugue_sqlParser::FuguePathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueCheckpointWeak(fugue_sqlParser::FugueCheckpointWeakContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueCheckpointStrong(fugue_sqlParser::FugueCheckpointStrongContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueCheckpointDeterministic(fugue_sqlParser::FugueCheckpointDeterministicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueCheckpointNamespace(fugue_sqlParser::FugueCheckpointNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueYield(fugue_sqlParser::FugueYieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueBroadcast(fugue_sqlParser::FugueBroadcastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueDataFramesList(fugue_sqlParser::FugueDataFramesListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueDataFramesDict(fugue_sqlParser::FugueDataFramesDictContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueDataFramePair(fugue_sqlParser::FugueDataFramePairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueDataFrameSource(fugue_sqlParser::FugueDataFrameSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueDataFrameNested(fugue_sqlParser::FugueDataFrameNestedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueDataFrameMember(fugue_sqlParser::FugueDataFrameMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueAssignment(fugue_sqlParser::FugueAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueAssignmentSign(fugue_sqlParser::FugueAssignmentSignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSingleOutputExtensionCommonWild(fugue_sqlParser::FugueSingleOutputExtensionCommonWildContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSingleOutputExtensionCommon(fugue_sqlParser::FugueSingleOutputExtensionCommonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueExtension(fugue_sqlParser::FugueExtensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSampleMethod(fugue_sqlParser::FugueSampleMethodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueZipType(fugue_sqlParser::FugueZipTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuguePrepartition(fugue_sqlParser::FuguePrepartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuguePartitionAlgo(fugue_sqlParser::FuguePartitionAlgoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuguePartitionNum(fugue_sqlParser::FuguePartitionNumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuguePartitionNumber(fugue_sqlParser::FuguePartitionNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueParamsPairs(fugue_sqlParser::FugueParamsPairsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueParamsObj(fugue_sqlParser::FugueParamsObjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueCols(fugue_sqlParser::FugueColsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueColsSort(fugue_sqlParser::FugueColsSortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueColSort(fugue_sqlParser::FugueColSortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueColumnIdentifier(fugue_sqlParser::FugueColumnIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueRenameExpression(fugue_sqlParser::FugueRenameExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueWildSchema(fugue_sqlParser::FugueWildSchemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueWildSchemaPair(fugue_sqlParser::FugueWildSchemaPairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSchemaOp(fugue_sqlParser::FugueSchemaOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSchema(fugue_sqlParser::FugueSchemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSchemaPair(fugue_sqlParser::FugueSchemaPairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSchemaKey(fugue_sqlParser::FugueSchemaKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSchemaSimpleType(fugue_sqlParser::FugueSchemaSimpleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSchemaListType(fugue_sqlParser::FugueSchemaListTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueSchemaStructType(fugue_sqlParser::FugueSchemaStructTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueRenamePair(fugue_sqlParser::FugueRenamePairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueJson(fugue_sqlParser::FugueJsonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueJsonObj(fugue_sqlParser::FugueJsonObjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueJsonPairs(fugue_sqlParser::FugueJsonPairsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueJsonPair(fugue_sqlParser::FugueJsonPairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueJsonKey(fugue_sqlParser::FugueJsonKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueJsonArray(fugue_sqlParser::FugueJsonArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueJsonValue(fugue_sqlParser::FugueJsonValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueJsonNumber(fugue_sqlParser::FugueJsonNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueJsonString(fugue_sqlParser::FugueJsonStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueJsonBool(fugue_sqlParser::FugueJsonBoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueJsonNull(fugue_sqlParser::FugueJsonNullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueIdentifier(fugue_sqlParser::FugueIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleStatement(fugue_sqlParser::SingleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleExpression(fugue_sqlParser::SingleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleTableIdentifier(fugue_sqlParser::SingleTableIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleMultipartIdentifier(fugue_sqlParser::SingleMultipartIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleFunctionIdentifier(fugue_sqlParser::SingleFunctionIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleDataType(fugue_sqlParser::SingleDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleTableSchema(fugue_sqlParser::SingleTableSchemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementDefault(fugue_sqlParser::StatementDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDmlStatement(fugue_sqlParser::DmlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUse(fugue_sqlParser::UseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateNamespace(fugue_sqlParser::CreateNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetNamespaceProperties(fugue_sqlParser::SetNamespacePropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetNamespaceLocation(fugue_sqlParser::SetNamespaceLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropNamespace(fugue_sqlParser::DropNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowNamespaces(fugue_sqlParser::ShowNamespacesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTable(fugue_sqlParser::CreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateHiveTable(fugue_sqlParser::CreateHiveTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTableLike(fugue_sqlParser::CreateTableLikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplaceTable(fugue_sqlParser::ReplaceTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnalyze(fugue_sqlParser::AnalyzeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddTableColumns(fugue_sqlParser::AddTableColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenameTableColumn(fugue_sqlParser::RenameTableColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTableColumns(fugue_sqlParser::DropTableColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenameTable(fugue_sqlParser::RenameTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetTableProperties(fugue_sqlParser::SetTablePropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsetTableProperties(fugue_sqlParser::UnsetTablePropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTableAlterColumn(fugue_sqlParser::AlterTableAlterColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHiveChangeColumn(fugue_sqlParser::HiveChangeColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHiveReplaceColumns(fugue_sqlParser::HiveReplaceColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetTableSerDe(fugue_sqlParser::SetTableSerDeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddTablePartition(fugue_sqlParser::AddTablePartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenameTablePartition(fugue_sqlParser::RenameTablePartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTablePartitions(fugue_sqlParser::DropTablePartitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetTableLocation(fugue_sqlParser::SetTableLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecoverPartitions(fugue_sqlParser::RecoverPartitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTable(fugue_sqlParser::DropTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropView(fugue_sqlParser::DropViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateView(fugue_sqlParser::CreateViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTempViewUsing(fugue_sqlParser::CreateTempViewUsingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterViewQuery(fugue_sqlParser::AlterViewQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateFunction(fugue_sqlParser::CreateFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropFunction(fugue_sqlParser::DropFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplain(fugue_sqlParser::ExplainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowTables(fugue_sqlParser::ShowTablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowTable(fugue_sqlParser::ShowTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowTblProperties(fugue_sqlParser::ShowTblPropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowColumns(fugue_sqlParser::ShowColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowViews(fugue_sqlParser::ShowViewsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowPartitions(fugue_sqlParser::ShowPartitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowFunctions(fugue_sqlParser::ShowFunctionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateTable(fugue_sqlParser::ShowCreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCurrentNamespace(fugue_sqlParser::ShowCurrentNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescribeFunction(fugue_sqlParser::DescribeFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescribeNamespace(fugue_sqlParser::DescribeNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescribeRelation(fugue_sqlParser::DescribeRelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescribeQuery(fugue_sqlParser::DescribeQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommentNamespace(fugue_sqlParser::CommentNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommentTable(fugue_sqlParser::CommentTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRefreshTable(fugue_sqlParser::RefreshTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRefreshResource(fugue_sqlParser::RefreshResourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCacheTable(fugue_sqlParser::CacheTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUncacheTable(fugue_sqlParser::UncacheTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClearCache(fugue_sqlParser::ClearCacheContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoadData(fugue_sqlParser::LoadDataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTruncateTable(fugue_sqlParser::TruncateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepairTable(fugue_sqlParser::RepairTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitManageResource(fugue_sqlParser::ManageResourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFailNativeCommand(fugue_sqlParser::FailNativeCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetConfiguration(fugue_sqlParser::SetConfigurationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResetConfiguration(fugue_sqlParser::ResetConfigurationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsupportedHiveNativeCommands(fugue_sqlParser::UnsupportedHiveNativeCommandsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTableHeader(fugue_sqlParser::CreateTableHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplaceTableHeader(fugue_sqlParser::ReplaceTableHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBucketSpec(fugue_sqlParser::BucketSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSkewSpec(fugue_sqlParser::SkewSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocationSpec(fugue_sqlParser::LocationSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommentSpec(fugue_sqlParser::CommentSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery(fugue_sqlParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertOverwriteTable(fugue_sqlParser::InsertOverwriteTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertIntoTable(fugue_sqlParser::InsertIntoTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertOverwriteHiveDir(fugue_sqlParser::InsertOverwriteHiveDirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertOverwriteDir(fugue_sqlParser::InsertOverwriteDirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionSpecLocation(fugue_sqlParser::PartitionSpecLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionSpec(fugue_sqlParser::PartitionSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionVal(fugue_sqlParser::PartitionValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTheNamespace(fugue_sqlParser::TheNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescribeFuncName(fugue_sqlParser::DescribeFuncNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescribeColName(fugue_sqlParser::DescribeColNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCtes(fugue_sqlParser::CtesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamedQuery(fugue_sqlParser::NamedQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableProvider(fugue_sqlParser::TableProviderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTableClauses(fugue_sqlParser::CreateTableClausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablePropertyList(fugue_sqlParser::TablePropertyListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableProperty(fugue_sqlParser::TablePropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablePropertyKey(fugue_sqlParser::TablePropertyKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablePropertyValue(fugue_sqlParser::TablePropertyValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantList(fugue_sqlParser::ConstantListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNestedConstantList(fugue_sqlParser::NestedConstantListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateFileFormat(fugue_sqlParser::CreateFileFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableFileFormat(fugue_sqlParser::TableFileFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGenericFileFormat(fugue_sqlParser::GenericFileFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStorageHandler(fugue_sqlParser::StorageHandlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResource(fugue_sqlParser::ResourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleInsertQuery(fugue_sqlParser::SingleInsertQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiInsertQuery(fugue_sqlParser::MultiInsertQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeleteFromTable(fugue_sqlParser::DeleteFromTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdateTable(fugue_sqlParser::UpdateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMergeIntoTable(fugue_sqlParser::MergeIntoTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryOrganization(fugue_sqlParser::QueryOrganizationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiInsertQueryBody(fugue_sqlParser::MultiInsertQueryBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryTermDefault(fugue_sqlParser::QueryTermDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFugueTerm(fugue_sqlParser::FugueTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetOperation(fugue_sqlParser::SetOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryPrimaryDefault(fugue_sqlParser::QueryPrimaryDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFromStmt(fugue_sqlParser::FromStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable(fugue_sqlParser::TableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInlineTableDefault1(fugue_sqlParser::InlineTableDefault1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSortItem(fugue_sqlParser::SortItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFromStatement(fugue_sqlParser::FromStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFromStatementBody(fugue_sqlParser::FromStatementBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransformQuerySpecification(fugue_sqlParser::TransformQuerySpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegularQuerySpecification(fugue_sqlParser::RegularQuerySpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionalFromClause(fugue_sqlParser::OptionalFromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransformClause(fugue_sqlParser::TransformClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectClause(fugue_sqlParser::SelectClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetClause(fugue_sqlParser::SetClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMatchedClause(fugue_sqlParser::MatchedClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotMatchedClause(fugue_sqlParser::NotMatchedClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMatchedAction(fugue_sqlParser::MatchedActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotMatchedAction(fugue_sqlParser::NotMatchedActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentList(fugue_sqlParser::AssignmentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(fugue_sqlParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhereClause(fugue_sqlParser::WhereClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHavingClause(fugue_sqlParser::HavingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHint(fugue_sqlParser::HintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHintStatement(fugue_sqlParser::HintStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFromClause(fugue_sqlParser::FromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregationClause(fugue_sqlParser::AggregationClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupingSet(fugue_sqlParser::GroupingSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivotClause(fugue_sqlParser::PivotClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivotColumn(fugue_sqlParser::PivotColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivotValue(fugue_sqlParser::PivotValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLateralView(fugue_sqlParser::LateralViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetQuantifier(fugue_sqlParser::SetQuantifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelation(fugue_sqlParser::RelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoinRelation(fugue_sqlParser::JoinRelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoinType(fugue_sqlParser::JoinTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoinCriteria(fugue_sqlParser::JoinCriteriaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSample(fugue_sqlParser::SampleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSampleByPercentile(fugue_sqlParser::SampleByPercentileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSampleByRows(fugue_sqlParser::SampleByRowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSampleByBucket(fugue_sqlParser::SampleByBucketContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSampleByBytes(fugue_sqlParser::SampleByBytesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierList(fugue_sqlParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierSeq(fugue_sqlParser::IdentifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderedIdentifierList(fugue_sqlParser::OrderedIdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderedIdentifier(fugue_sqlParser::OrderedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierCommentList(fugue_sqlParser::IdentifierCommentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierComment(fugue_sqlParser::IdentifierCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableName(fugue_sqlParser::TableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAliasedQuery(fugue_sqlParser::AliasedQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAliasedRelation(fugue_sqlParser::AliasedRelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInlineTableDefault2(fugue_sqlParser::InlineTableDefault2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableValuedFunction(fugue_sqlParser::TableValuedFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInlineTable(fugue_sqlParser::InlineTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionTable(fugue_sqlParser::FunctionTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableAlias(fugue_sqlParser::TableAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRowFormatSerde(fugue_sqlParser::RowFormatSerdeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRowFormatDelimited(fugue_sqlParser::RowFormatDelimitedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultipartIdentifierList(fugue_sqlParser::MultipartIdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultipartIdentifier(fugue_sqlParser::MultipartIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableIdentifier(fugue_sqlParser::TableIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionIdentifier(fugue_sqlParser::FunctionIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamedExpression(fugue_sqlParser::NamedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamedExpressionSeq(fugue_sqlParser::NamedExpressionSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransformList(fugue_sqlParser::TransformListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentityTransform(fugue_sqlParser::IdentityTransformContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitApplyTransform(fugue_sqlParser::ApplyTransformContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransformArgument(fugue_sqlParser::TransformArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(fugue_sqlParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalNot(fugue_sqlParser::LogicalNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicated(fugue_sqlParser::PredicatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExists(fugue_sqlParser::ExistsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalBinary(fugue_sqlParser::LogicalBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicate(fugue_sqlParser::PredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValueExpressionDefault(fugue_sqlParser::ValueExpressionDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparison(fugue_sqlParser::ComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithmeticBinary(fugue_sqlParser::ArithmeticBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithmeticUnary(fugue_sqlParser::ArithmeticUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct(fugue_sqlParser::StructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDereference(fugue_sqlParser::DereferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleCase(fugue_sqlParser::SimpleCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnReference(fugue_sqlParser::ColumnReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRowConstructor(fugue_sqlParser::RowConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLast(fugue_sqlParser::LastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStar(fugue_sqlParser::StarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOverlay(fugue_sqlParser::OverlayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubscript(fugue_sqlParser::SubscriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubqueryExpression(fugue_sqlParser::SubqueryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubstring(fugue_sqlParser::SubstringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCurrentDatetime(fugue_sqlParser::CurrentDatetimeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCast(fugue_sqlParser::CastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantDefault(fugue_sqlParser::ConstantDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambda(fugue_sqlParser::LambdaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesizedExpression(fugue_sqlParser::ParenthesizedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExtract(fugue_sqlParser::ExtractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrim(fugue_sqlParser::TrimContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(fugue_sqlParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearchedCase(fugue_sqlParser::SearchedCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPosition(fugue_sqlParser::PositionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFirst(fugue_sqlParser::FirstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullLiteral(fugue_sqlParser::NullLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalLiteral(fugue_sqlParser::IntervalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeConstructor(fugue_sqlParser::TypeConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumericLiteral(fugue_sqlParser::NumericLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanLiteral(fugue_sqlParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(fugue_sqlParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonOperator(fugue_sqlParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonEqualOperator(fugue_sqlParser::ComparisonEqualOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithmeticOperator(fugue_sqlParser::ArithmeticOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicateOperator(fugue_sqlParser::PredicateOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanValue(fugue_sqlParser::BooleanValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval(fugue_sqlParser::IntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitErrorCapturingMultiUnitsInterval(fugue_sqlParser::ErrorCapturingMultiUnitsIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiUnitsInterval(fugue_sqlParser::MultiUnitsIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitErrorCapturingUnitToUnitInterval(fugue_sqlParser::ErrorCapturingUnitToUnitIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnitToUnitInterval(fugue_sqlParser::UnitToUnitIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalValue(fugue_sqlParser::IntervalValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalUnit(fugue_sqlParser::IntervalUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColPosition(fugue_sqlParser::ColPositionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComplexDataType(fugue_sqlParser::ComplexDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimitiveDataType(fugue_sqlParser::PrimitiveDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedColTypeWithPositionList(fugue_sqlParser::QualifiedColTypeWithPositionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedColTypeWithPosition(fugue_sqlParser::QualifiedColTypeWithPositionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColTypeList(fugue_sqlParser::ColTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColType(fugue_sqlParser::ColTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComplexColTypeList(fugue_sqlParser::ComplexColTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComplexColType(fugue_sqlParser::ComplexColTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhenClause(fugue_sqlParser::WhenClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowClause(fugue_sqlParser::WindowClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamedWindow(fugue_sqlParser::NamedWindowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowRef(fugue_sqlParser::WindowRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowDef(fugue_sqlParser::WindowDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowFrame(fugue_sqlParser::WindowFrameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrameBound(fugue_sqlParser::FrameBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedNameList(fugue_sqlParser::QualifiedNameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionName(fugue_sqlParser::FunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedName(fugue_sqlParser::QualifiedNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitErrorCapturingIdentifier(fugue_sqlParser::ErrorCapturingIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitErrorIdent(fugue_sqlParser::ErrorIdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(fugue_sqlParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnquotedIdentifier(fugue_sqlParser::UnquotedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuotedIdentifierAlternative(fugue_sqlParser::QuotedIdentifierAlternativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuotedIdentifier(fugue_sqlParser::QuotedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExponentLiteral(fugue_sqlParser::ExponentLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimalLiteral(fugue_sqlParser::DecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLegacyDecimalLiteral(fugue_sqlParser::LegacyDecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(fugue_sqlParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBigIntLiteral(fugue_sqlParser::BigIntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSmallIntLiteral(fugue_sqlParser::SmallIntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTinyIntLiteral(fugue_sqlParser::TinyIntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoubleLiteral(fugue_sqlParser::DoubleLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBigDecimalLiteral(fugue_sqlParser::BigDecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterColumnAction(fugue_sqlParser::AlterColumnActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnsiNonReserved(fugue_sqlParser::AnsiNonReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrictNonReserved(fugue_sqlParser::StrictNonReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNonReserved(fugue_sqlParser::NonReservedContext *ctx) override {
    return visitChildren(ctx);
  }


};

