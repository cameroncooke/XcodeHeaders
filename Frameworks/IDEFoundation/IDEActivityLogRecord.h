//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTFileDataType, IDEEntityIdentifier, IDETypeIdentifier, NSString, NSURL;

@interface IDEActivityLogRecord : NSObject
{
    IDEEntityIdentifier *_entityIdentifier;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (id)cacheLog:(id)arg1;
+ (void)uncacheLogRecord:(id)arg1;
+ (void)cacheLogRecord:(id)arg1;
+ (id)cachedLogRecordWithURL:(id)arg1;
@property(readonly) IDEEntityIdentifier *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
- (void).cxx_destruct;
- (id)testableSummariesForFilePath:(id)arg1 runDestinationRecord:(id *)arg2 error:(id *)arg3;
- (id)coverageReport;
- (id)coverageReportFilePath;
- (id)testableSummariesPlistFilePath;
- (id)initWithEntityIdentifier:(id)arg1;
- (long long)compareUsingTimeStartedRecording:(id)arg1;
- (id)fullLogIfInMemory;
- (id)fullLogWithError:(id *)arg1;
- (void)removeSelfWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly) BOOL isRemoved;
@property(readonly) BOOL isRecording;
@property(readonly) NSString *highLevelStatus;
@property(readonly) NSString *signature;
@property(readonly) DVTFileDataType *documentType;
@property(readonly, nonatomic) double timeStoppedRecording;
@property(readonly) double timeStartedRecording;
@property(readonly) NSString *title;
@property(readonly) IDETypeIdentifier *domainType;
@property(readonly) NSString *uniqueIdentifier;
@property(readonly) NSURL *logURL;

@end

