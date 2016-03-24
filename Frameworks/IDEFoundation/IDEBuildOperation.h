//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTOperation.h"

#import "IDEBuilderCallbacks.h"
#import "IDEExecutingOperationTrackable.h"

@class DVTDispatchLock, DVTDynamicLogController, DVTFilePath, IDEActivityLogSection, IDEBuildOperationDescription, IDEBuildOperationQueueSet, IDEBuildOperationStatus, IDEBuildParameters, IDEBuildStatisticsSection, IDEEntityIdentifier, IDEExecutionEnvironment, IDEExecutionOperationTracker, IDESchemeActionResult, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface IDEBuildOperation : DVTOperation <IDEExecutingOperationTrackable, IDEBuilderCallbacks>
{
    IDEBuildOperationDescription *_buildOperationDescription;
    int _purpose;
    int _buildCommand;
    NSArray *_buildables;
    IDEBuildParameters *_buildParameters;
    NSMapTable *_buildParametersForBuildable;
    BOOL _parallelizeBuildables;
    BOOL _buildImplicitDependencies;
    BOOL _restorePersistedBuildResults;
    BOOL _dontActuallyRunCommands;
    DVTFilePath *_moduleBuildSessionFilePath;
    DVTFilePath *_singleFileToBuild;
    int _state;
    int _result;
    IDEActivityLogSection *_buildLog;
    float _percentComplete;
    IDEBuildOperationStatus *_buildStatus;
    BOOL _isFinished;
    DVTDispatchLock *_operationLock;
    NSOperationQueue *_builderQueue;
    IDEBuildOperationQueueSet *_buildTaskQueueSet;
    NSMapTable *_buildablesToBuilders;
    NSMapTable *_buildableOperationManagers;
    unsigned long long _buildersBuilt;
    id <DVTCancellationBlockCompletion> _cancellationToken;
    NSMutableSet *_generatedFileInfo;
    NSMutableDictionary *_copiedFilePathsMap;
    NSMutableArray *_buildSetupErrorStrings;
    NSMutableArray *_buildSetupWarningStrings;
    NSMutableArray *_buildSetupNoticeStrings;
    IDEExecutionOperationTracker *_mainExecutionTracker;
    IDEBuildStatisticsSection *_topLevelStatisticsSection;
    IDEExecutionEnvironment *_executionEnvironment;
    IDEEntityIdentifier *_schemeIdentifier;
    IDESchemeActionResult *_schemeActionResult;
    NSDate *_startTime;
    NSDate *_stopTime;
    IDEBuildStatisticsSection *_buildStatisticsSection;
    DVTDynamicLogController *_builderTimingDataLogController;
}

+ (CDUnknownBlockType)buildStatisticsEmissionSummaryBlock;
+ (long long)defaultQualityOfServiceClass;
+ (void)setDefaultBuildStatisticsSectionParent:(id)arg1;
+ (void)initialize;
@property unsigned long long buildersBuilt; // @synthesize buildersBuilt=_buildersBuilt;
@property(retain) DVTDynamicLogController *builderTimingDataLogController; // @synthesize builderTimingDataLogController=_builderTimingDataLogController;
@property(readonly) NSMapTable *buildablesToBuilders; // @synthesize buildablesToBuilders=_buildablesToBuilders;
@property(readonly) IDEBuildOperationQueueSet *buildTaskQueueSet; // @synthesize buildTaskQueueSet=_buildTaskQueueSet;
@property(readonly) NSOperationQueue *builderQueue; // @synthesize builderQueue=_builderQueue;
@property(readonly) BOOL buildImplicitDependencies; // @synthesize buildImplicitDependencies=_buildImplicitDependencies;
@property(retain) IDEBuildStatisticsSection *buildStatisticsSection; // @synthesize buildStatisticsSection=_buildStatisticsSection;
@property(copy) NSDate *stopTime; // @synthesize stopTime=_stopTime;
@property(copy) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain) IDEBuildOperationStatus *buildStatus; // @synthesize buildStatus=_buildStatus;
@property float percentComplete; // @synthesize percentComplete=_percentComplete;
@property(readonly) int result; // @synthesize result=_result;
@property(readonly) int state; // @synthesize state=_state;
@property(retain, nonatomic) IDESchemeActionResult *schemeActionResult; // @synthesize schemeActionResult=_schemeActionResult;
@property(readonly, copy, nonatomic) IDEEntityIdentifier *schemeIdentifier; // @synthesize schemeIdentifier=_schemeIdentifier;
@property(readonly) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property(readonly) IDEActivityLogSection *buildLog; // @synthesize buildLog=_buildLog;
@property(readonly) BOOL restorePersistedBuildResults; // @synthesize restorePersistedBuildResults=_restorePersistedBuildResults;
@property(readonly) BOOL dontActuallyRunCommands; // @synthesize dontActuallyRunCommands=_dontActuallyRunCommands;
@property(readonly) BOOL parallelizeBuildables; // @synthesize parallelizeBuildables=_parallelizeBuildables;
@property(readonly) IDEBuildParameters *buildParameters; // @synthesize buildParameters=_buildParameters;
@property(readonly) NSArray *buildables; // @synthesize buildables=_buildables;
@property(readonly) int buildCommand; // @synthesize buildCommand=_buildCommand;
@property(readonly) IDEBuildOperationDescription *buildOperationDescription; // @synthesize buildOperationDescription=_buildOperationDescription;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)registerTracker:(id)arg1;
@property(retain) IDEBuildStatisticsSection *topLevelStatisticsSection;
- (void)_postDistributedProgressNotification;
- (void)stopWithResultCode:(int)arg1;
- (void)lastBuilderDidFinish;
- (void)_cancelAllBuilders;
- (void)cancel;
- (void)start;
- (void)builder:(id)arg1 didUpdateBuildStatusWithStateDescription:(id)arg2 fileProgressString:(id)arg3 builderProgress:(double)arg4;
- (void)builderDidFinishExecuting:(id)arg1;
- (void)builderDidStartExecuting:(id)arg1;
- (void)builder:(id)arg1 resultDidChange:(int)arg2;
- (void)builder:(id)arg1 activityLogSectionDidChange:(id)arg2;
- (void)_addOperationsForSingleFileBuild;
- (id)_buildableForSingleFileToBuildStartingWithBuildable:(id)arg1 recursionDetectionSet:(id)arg2;
- (void)_addOperationsForAllBuildables;
- (void)addOperationsToQueue:(id)arg1;
- (id)_addOperationForBuildableIfNeeded:(id)arg1;
- (id)_addOperationForBuildableIfNeeded:(id)arg1 recursionDetectionArray:(id)arg2;
- (id)finalBuildParametersForBuildable:(id)arg1;
- (void)setupCallbackBlocksOnNewBuilder:(id)arg1;
- (void)_updateBuildStatusWithStateDescription:(id)arg1 fileProgressString:(id)arg2;
- (void)_takeMemorySnapshotsWithLog:(id)arg1;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)changeMaximumOperationConcurrencyUsingThrottleFactor:(double)arg1;
- (id)copiedFilePathsMap;
- (void)addCopiedFilePathsFromDictionary:(id)arg1;
- (void)addBuildSetupNoticeString:(id)arg1;
- (void)addBuildSetupWarningString:(id)arg1;
- (void)addBuildSetupErrorString:(id)arg1;
- (void)addGeneratedFileInfo:(id)arg1;
@property(readonly) double duration;
@property(retain) NSString *localizedStateDescription;
- (id)_buildParametersForBuildable:(id)arg1;
- (void)setBuildParameters:(id)arg1 forBuildable:(id)arg2;
- (id)harvestedInfoForBuildable:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

