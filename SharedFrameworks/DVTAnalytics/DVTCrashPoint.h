//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTAnalyticsSnapshotFileSystemSerialization.h"

@class DVTAnalyticsCrashPointIdentifier, DVTCrashLogProvider, DVTCrashPointDistributionInfo, DVTCrashPointUserData, DVTFilePath, NSString;

@interface DVTCrashPoint : NSObject <DVTAnalyticsSnapshotFileSystemSerialization>
{
    BOOL _topCrash;
    BOOL _placeholder;
    DVTAnalyticsCrashPointIdentifier *_crashPointIdentifier;
    DVTCrashPointUserData *_userData;
    DVTCrashLogProvider *_crashLogProvider;
    unsigned long long _uniqueDeviceCount;
    unsigned long long _crashLogsCount;
    DVTCrashPointDistributionInfo *_distributionInfo;
    NSString *_lastCrashReporterKey;
    NSString *_lastCrashPointPagingKey;
    NSString *_crashPointString;
    NSString *_sourceFileName;
    unsigned long long _sourceFileLine;
    DVTFilePath *_cachePath;
    NSString *_appExtensionPointIdentifier;
}

+ (id)objectFromFilePath:(id)arg1 error:(id *)arg2;
@property(retain) NSString *appExtensionPointIdentifier; // @synthesize appExtensionPointIdentifier=_appExtensionPointIdentifier;
@property BOOL placeholder; // @synthesize placeholder=_placeholder;
@property(retain) DVTFilePath *cachePath; // @synthesize cachePath=_cachePath;
@property unsigned long long sourceFileLine; // @synthesize sourceFileLine=_sourceFileLine;
@property(retain) NSString *sourceFileName; // @synthesize sourceFileName=_sourceFileName;
@property(retain) NSString *crashPointString; // @synthesize crashPointString=_crashPointString;
@property(getter=isTopCrash) BOOL topCrash; // @synthesize topCrash=_topCrash;
@property(retain) NSString *lastCrashPointPagingKey; // @synthesize lastCrashPointPagingKey=_lastCrashPointPagingKey;
@property(retain) NSString *lastCrashReporterKey; // @synthesize lastCrashReporterKey=_lastCrashReporterKey;
@property(retain) DVTCrashPointDistributionInfo *distributionInfo; // @synthesize distributionInfo=_distributionInfo;
@property unsigned long long crashLogsCount; // @synthesize crashLogsCount=_crashLogsCount;
@property unsigned long long uniqueDeviceCount; // @synthesize uniqueDeviceCount=_uniqueDeviceCount;
@property(retain) DVTCrashLogProvider *crashLogProvider; // @synthesize crashLogProvider=_crashLogProvider;
@property(retain) DVTCrashPointUserData *userData; // @synthesize userData=_userData;
@property(retain) DVTAnalyticsCrashPointIdentifier *crashPointIdentifier; // @synthesize crashPointIdentifier=_crashPointIdentifier;
- (void).cxx_destruct;
- (id)snapshotWithError:(id *)arg1;
- (id)_infoJSON;
- (BOOL)crashPointStringMatchesFrame:(id)arg1;
- (long long)crashPointStringMatchesImage:(id)arg1 symbol:(id)arg2 offset:(unsigned long long)arg3 sourceFileName:(id)arg4 sourceLine:(unsigned long long)arg5;
- (BOOL)_crashPointStringMatchesImage:(id)arg1 symbol:(id)arg2 offset:(unsigned long long)arg3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 userData:(id)arg2 crashPointString:(id)arg3 sourceFileName:(id)arg4 sourceFileLine:(unsigned long long)arg5 cachePath:(id)arg6;
- (id)initWithCachePath:(id)arg1;
- (id)init;

@end

