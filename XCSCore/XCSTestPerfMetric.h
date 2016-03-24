//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSNumber, NSString, XCSTest;

@interface XCSTestPerfMetric : XCSObject
{
    BOOL passed;
    XCSTest *test;
    NSString *name;
    NSString *identifier;
    unsigned long long type;
    NSString *unit;
    double avg;
    double min;
    double max;
    double rsd;
    NSNumber *baseline;
    NSNumber *maxPercentRegression;
    NSNumber *maxPercentRelativeStandardDeviation;
    struct NSArray *iterations;
}

@property(readonly, nonatomic) NSArray *iterations; // @synthesize iterations;
@property(readonly, nonatomic) NSNumber *maxPercentRelativeStandardDeviation; // @synthesize maxPercentRelativeStandardDeviation;
@property(readonly, nonatomic) NSNumber *maxPercentRegression; // @synthesize maxPercentRegression;
@property(readonly, nonatomic) NSNumber *baseline; // @synthesize baseline;
@property(readonly, nonatomic) double rsd; // @synthesize rsd;
@property(readonly, nonatomic) double max; // @synthesize max;
@property(readonly, nonatomic) double min; // @synthesize min;
@property(readonly, nonatomic) double avg; // @synthesize avg;
@property(readonly, nonatomic) BOOL passed; // @synthesize passed;
@property(readonly, copy, nonatomic) NSString *unit; // @synthesize unit;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) __weak XCSTest *test; // @synthesize test;
- (void).cxx_destruct;
- (BOOL)_validateWithName:(id)arg1 identifier:(id)arg2 type:(unsigned long long)arg3 unit:(id)arg4 passed:(BOOL)arg5 avg:(double)arg6 min:(double)arg7 max:(double)arg8 rsd:(double)arg9 baseline:(id)arg10 maxPercentRegression:(id)arg11 maxPercentRelativeStandardDeviation:(id)arg12 iterations:(struct NSArray *)arg13 errors:(id *)arg14;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)description;
- (BOOL)setTest:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 contents:(id)arg2 service:(id)arg3 validationErrors:(id *)arg4;
- (id)initWithName:(id)arg1 identifier:(id)arg2 type:(unsigned long long)arg3 unit:(id)arg4 passed:(BOOL)arg5 avg:(double)arg6 min:(double)arg7 max:(double)arg8 rsd:(double)arg9 baseline:(id)arg10 maxPercentRegression:(id)arg11 maxPercentRelativeStandardDeviation:(id)arg12 iterations:(id)arg13 service:(id)arg14 validationErrors:(id *)arg15;

@end

