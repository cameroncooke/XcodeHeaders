//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTFilePath, IDEArchivedApplication, IDEArchivedContent, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IDEArchive : NSObject
{
    NSMutableDictionary *_infoDictionary;
    BOOL _savePending;
    NSArray *_topLevelDistributionItems;
    NSNumber *_isFromFreeProvisioningTeamN;
    BOOL _symbolDownloadInProgress;
    BOOL _estimateInProgress;
    DVTFilePath *_path;
    IDEArchivedContent *_archivedContent;
    NSString *_archiveSize;
}

+ (long long)_computedApproximateAppStoreFileSizeForArchiveContentPath:(id)arg1 forPlatform:(id)arg2;
+ (long long)_fileSizeForPathString:(id)arg1;
+ (BOOL)_zipDirectoryAtPath:(id)arg1 destination:(id)arg2 excluding:(id)arg3;
+ (id)_availableArchivePathInDirectory:(id)arg1 withName:(id)arg2 creationDate:(id)arg3 usingFileManager:(id)arg4;
+ (id)_archivePathOverride;
+ (id)_archivePlistPathForArchivePath:(id)arg1;
+ (void)_copySCMBlueprintFromWorkspace:(id)arg1 toArchiveWithPath:(id)arg2 usingFileManager:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (BOOL)_copyAppleProvidedContentFromDirectory:(id)arg1 toArchiveWithPath:(id)arg2 usingFileManager:(id)arg3 error:(id *)arg4;
+ (BOOL)_copyProductDefinitionPlistFromDirectory:(id)arg1 toArchiveWithPath:(id)arg2 usingFileManager:(id)arg3 error:(id *)arg4;
+ (BOOL)_copyBCSymbolMapsFromDirectory:(id)arg1 toArchiveWithPath:(id)arg2 usingFileManager:(id)arg3 error:(id *)arg4;
+ (BOOL)_copydSYMsFromDirectory:(id)arg1 toArchiveWithPath:(id)arg2 usingFileManager:(id)arg3 error:(id *)arg4;
+ (id)_createArchiveWithName:(id)arg1 usingFileManager:(id)arg2 error:(id *)arg3;
+ (id)_folderPathForArchiveWithDate:(id)arg1;
+ (void)createArchiveWithName:(id)arg1 schemeName:(id)arg2 platform:(id)arg3 products:(id)arg4 auxiliaryFiles:(id)arg5 workspace:(id)arg6 usingFileManager:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;
+ (id)_toolchainInfo;
+ (id)installArchiveWithArchivePath:(id)arg1 usingFileManager:(id)arg2;
+ (id)archiveWithArchivePath:(id)arg1;
+ (id)keyPathsForValuesAffectingProductDefinitionPlistPath;
+ (id)_productDefinitionPlistPathForArchivePath:(id)arg1;
+ (id)keyPathsForValuesAffectingSourceControlBlueprint;
+ (id)_sourceControlBlueprintDirectoryPathForArchivePath:(id)arg1;
+ (id)keyPathsForValuesAffectingDSYMDirectoryPath;
+ (id)_dSYMDirectoryPathForArchivePath:(id)arg1;
+ (id)keyPathsForValuesAffectingProductsDirectoryPath;
+ (id)_productsDirectoryPathForArchivePath:(id)arg1;
+ (id)keyPathsForValuesAffectingCanDownloadSymbols;
@property BOOL estimateInProgress; // @synthesize estimateInProgress=_estimateInProgress;
@property(readonly) IDEArchivedContent *archivedContent; // @synthesize archivedContent=_archivedContent;
@property(retain) DVTFilePath *path; // @synthesize path=_path;
- (void).cxx_destruct;
@property(readonly) NSString *toolchainDisplayName;
@property(readonly) NSString *toolchainIdentifier;
- (id)_toolchainInfo;
@property(readonly) BOOL containsCustomToolchain;
@property(readonly) BOOL isFromFreeProvisioningTeam;
- (void)estimateSizeInBackgroundForPlatform:(id)arg1;
- (void)_saveArchive:(id)arg1;
- (void)markDirty;
- (id)objectForEnterpriseDistributionKey:(id)arg1;
- (void)setObject:(id)arg1 forEnterpriseDistributionKey:(id)arg2;
@property(copy) NSDictionary *enterpriseDistributionManifest;
@property(readonly) NSString *archiveSize; // @synthesize archiveSize=_archiveSize;
- (void)addDownloadedSymbolUUID:(id)arg1;
@property(readonly, copy) NSArray *downloadedSymbolUUIDs;
@property(copy) NSString *statusString;
@property(copy) NSString *comment;
@property long long estimatedAppStoreFileSize;
@property BOOL estimatedAppStoreFileSizeIsValid;
@property(readonly) NSDate *creationDate;
@property(readonly) unsigned long long version;
@property(readonly) NSString *schemeName;
@property(copy) NSString *name;
@property(readonly) DVTFilePath *productDefinitionPlistPath;
@property(readonly) DVTFilePath *sourceControlBlueprintDirectoryPath;
@property(readonly) DVTFilePath *dSYMDirectoryPath;
@property(readonly) DVTFilePath *productsDirectoryPath;
@property(readonly) NSMutableDictionary *infoDictionary;
@property BOOL symbolDownloadInProgress; // @synthesize symbolDownloadInProgress=_symbolDownloadInProgress;
@property(readonly) BOOL canDownloadSymbols;
- (BOOL)canSubmitIgnoringPreflightChecks;
- (BOOL)_canPerformAllTasksWithError:(id *)arg1;
@property(readonly) BOOL canSubmit;
@property(readonly) BOOL canExport;
@property(readonly) BOOL canValidate;
- (BOOL)_canPerformTask:(int)arg1 ignorePreflightChecks:(BOOL)arg2 error:(id *)arg3;
@property(readonly) IDEArchivedApplication *application;
- (id)_initWithPath:(id)arg1 infoDictionary:(id)arg2;

@end
