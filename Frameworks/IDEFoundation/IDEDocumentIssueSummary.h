//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSHashTable, NSMutableArray, NSMutableDictionary;

@interface IDEDocumentIssueSummary : NSObject
{
    NSMutableArray *_vendedIssuesBySeqNum;
    unsigned long long _maxSeverity;
    NSMutableDictionary *_issuesIndexedByLineNumber;
    NSHashTable *_observers;
    unsigned long long _testFailureCount;
    unsigned long long _errorCount;
    unsigned long long _warningCount;
    unsigned long long _noticeCount;
    unsigned long long _analyzerResultCount;
    unsigned long long _fixItCount;
}

+ (id)keyPathsForValuesAffectingMaxSeverity;
@property(readonly) unsigned long long fixItCount; // @synthesize fixItCount=_fixItCount;
@property(readonly) unsigned long long analyzerResultCount; // @synthesize analyzerResultCount=_analyzerResultCount;
@property(readonly) unsigned long long noticeCount; // @synthesize noticeCount=_noticeCount;
@property(readonly) unsigned long long warningCount; // @synthesize warningCount=_warningCount;
@property(readonly) unsigned long long errorCount; // @synthesize errorCount=_errorCount;
@property(readonly) unsigned long long testFailureCount; // @synthesize testFailureCount=_testFailureCount;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSMutableDictionary *issuesIndexedByLineNumber; // @synthesize issuesIndexedByLineNumber=_issuesIndexedByLineNumber;
@property(copy, nonatomic) NSArray *vendedIssuesBySeqNum; // @synthesize vendedIssuesBySeqNum=_vendedIssuesBySeqNum;
- (void).cxx_destruct;
@property(readonly) unsigned long long maxSeverity;
- (void)removeVendedIssuesBySeqNumAtIndexes:(id)arg1;
- (void)insertVendedIssuesBySeqNum:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromVendedIssuesBySeqNumAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inVendedIssuesBySeqNumAtIndex:(unsigned long long)arg2;
- (id)init;

@end

