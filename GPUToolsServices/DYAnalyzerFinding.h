//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSMutableString, NSString;

@interface DYAnalyzerFinding : NSObject <NSCopying, NSCoding, NSObject>
{
    NSString *_kind;
    NSString *_generator;
    NSMutableString *_details;
    NSMutableString *_shortDetails;
    NSMutableString *_simplifiedDetails;
    NSString *_links;
    NSMutableIndexSet *_functionIndices;
    NSMutableDictionary *_statistics;
    id <NSCoding><NSCopying><NSObject> _additionalData;
    unsigned int _frameNum;
    unsigned int _drawCallNum;
    unsigned int _classification;
    int _warningLevel;
    int _granularity;
    int _platform;
    unsigned long long _graphicsEngineID;
    unsigned long long _resourceGroupID;
    NSArray *_subfindings;
}

+ (id)_findingLevelString:(int)arg1;
@property(retain, nonatomic) NSArray *subfindings; // @synthesize subfindings=_subfindings;
@property(retain, nonatomic) id <NSCoding><NSCopying><NSObject> additionalData; // @synthesize additionalData=_additionalData;
@property(readonly, copy, nonatomic) NSMutableDictionary *statistics; // @synthesize statistics=_statistics;
@property(nonatomic) unsigned int drawCallNum; // @synthesize drawCallNum=_drawCallNum;
@property(nonatomic) unsigned int frameNum; // @synthesize frameNum=_frameNum;
@property(readonly, copy, nonatomic) NSIndexSet *functionIndices; // @synthesize functionIndices=_functionIndices;
@property(nonatomic) int warningLevel; // @synthesize warningLevel=_warningLevel;
@property(copy, nonatomic) NSString *links; // @synthesize links=_links;
@property(copy, nonatomic) NSMutableString *details; // @synthesize details=_details;
@property(retain, nonatomic) NSString *generator; // @synthesize generator=_generator;
@property(nonatomic) int granularity; // @synthesize granularity=_granularity;
@property(nonatomic) unsigned long long resourceGroupID; // @synthesize resourceGroupID=_resourceGroupID;
@property(nonatomic) unsigned long long graphicsEngineID; // @synthesize graphicsEngineID=_graphicsEngineID;
@property(nonatomic) unsigned int classification; // @synthesize classification=_classification;
@property(retain, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) int platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (BOOL)isTextureImageCompletelyUpdated;
- (BOOL)isBufferDataCompletelyUpdated;
- (BOOL)isInefficientStateUpdate;
- (BOOL)isRedundantCallOrQuery;
- (BOOL)isRedundantCall;
- (BOOL)isFrameStatistics;
- (BOOL)isDataRestoreUnnecessaryForFunc:(const struct Function *)arg1 targetArgIndex:(int)arg2 objectType:(unsigned int)arg3 analyzerEngine:(id)arg4;
- (id)debugPrintString;
- (void)addFunctionIndices:(id)arg1;
- (void)addFunctionIndex:(unsigned long long)arg1;
- (void)appendStatistic:(id)arg1 object:(id)arg2;
- (void)appendStatistics:(id)arg1;
- (void)setStatistics:(id)arg1;
- (id)_simplifiedDetailsStringSubstituted:(id)arg1 plural:(BOOL)arg2;
- (id)simplifiedDetailsSubstituted:(BOOL)arg1;
@property(readonly, copy, nonatomic) NSString *simplifiedDetails;
- (void)setSimplifiedDetails:(id)arg1;
@property(copy, nonatomic) NSString *shortDetails;
- (void)loadSimplifiedDetailString:(id)arg1 fromEngine:(id)arg2;
- (void)appendDetailStrings:(id)arg1 fromEngine:(id)arg2;
- (void)appendShortDetails:(id)arg1;
- (void)appendDetails:(id)arg1;
@property(readonly, retain, nonatomic) NSString *localizedKind; // @dynamic localizedKind;
@property(readonly, retain, nonatomic) NSString *synopsis; // @dynamic synopsis;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithPlatform:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

