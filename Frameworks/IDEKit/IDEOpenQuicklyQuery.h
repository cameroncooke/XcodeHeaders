//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTDelayedInvocation, DVTStackBacktrace, IDEOpenQuicklyContext, NSArray, NSString;

@interface IDEOpenQuicklyQuery : NSObject <DVTInvalidation>
{
    NSArray *_matchProviders;
    NSArray *_observationTokens;
    IDEOpenQuicklyContext *_context;
    NSArray *_matches;
    NSArray *_providerClasses;
    DVTDelayedInvocation *_matchInvocation;
    id <IDEOpenQuicklyQueryDelegate> _delegate;
    BOOL _idle;
}

+ (id)unscopedProviderClasses;
+ (id)scopedProviderClasses;
+ (void)initialize;
@property(getter=isIdle) BOOL idle; // @synthesize idle=_idle;
@property(copy) NSArray *matches; // @synthesize matches=_matches;
@property(retain, nonatomic) IDEOpenQuicklyContext *context; // @synthesize context=_context;
@property(retain) id <IDEOpenQuicklyQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)toggleRuthless;
- (void)validateMatchesIfNeeded;
- (void)_validateMatches:(id)arg1;
- (void)validateMatches;
- (void)logMatches:(id)arg1 logLevel:(int)arg2;
- (id)beRuthless:(id)arg1;
- (id)trimDuplicates:(id)arg1;
- (id)trimSymbolMatches:(id)arg1;
- (id)sortedTopMatches:(long long)arg1;
- (void)_invokeBlockWithScoredMatches:(CDUnknownBlockType)arg1;
- (long long)totalNumberOfMatches;
- (BOOL)_allMatchProvidersAreIdle;
- (id)initWithProviderClasses:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

