//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEIODebugGaugesCore/IDEGaugeDebuggingAddition.h>

@class NSArray, NSDate, NSNumber;

@interface IDEFileIOGaugeDebuggingAddition : IDEGaugeDebuggingAddition
{
    NSDate *_updateTime;
    NSNumber *_rdBytesPerSecond;
    NSNumber *_wrBytesPerSecond;
    NSNumber *_rdBytes;
    NSNumber *_wrBytes;
    NSArray *_rdBytesDeltas;
    NSArray *_wrBytesDeltas;
    NSArray *_openFiles;
    NSArray *_assets;
}

+ (id)reportDataQueryAttributes;
+ (id)requiredDataQueryAttribute;
+ (id)basicDataQueryAttributes;
+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
@property(readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) NSArray *openFiles; // @synthesize openFiles=_openFiles;
@property(readonly, nonatomic) NSArray *wrBytesDeltas; // @synthesize wrBytesDeltas=_wrBytesDeltas;
@property(readonly, nonatomic) NSArray *rdBytesDeltas; // @synthesize rdBytesDeltas=_rdBytesDeltas;
@property(readonly, nonatomic) NSNumber *wrBytes; // @synthesize wrBytes=_wrBytes;
@property(readonly, nonatomic) NSNumber *rdBytes; // @synthesize rdBytes=_rdBytes;
@property(readonly, nonatomic) NSNumber *wrBytesPerSecond; // @synthesize wrBytesPerSecond=_wrBytesPerSecond;
@property(readonly, nonatomic) NSNumber *rdBytesPerSecond; // @synthesize rdBytesPerSecond=_rdBytesPerSecond;
@property(readonly, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
- (void).cxx_destruct;
- (void)processQueryResultDict:(id)arg1;

@end
