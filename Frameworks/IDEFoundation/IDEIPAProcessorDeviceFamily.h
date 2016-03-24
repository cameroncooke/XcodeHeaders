//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEIPAProcessorDevice, NSDictionary, NSSet, NSString;

@interface IDEIPAProcessorDeviceFamily : NSObject
{
    IDEIPAProcessorDevice *_idiomaticDevice;
    NSSet *_devices;
    NSString *_displayName;
    unsigned long long _sortOrder;
    struct NSDictionary *_traits;
}

@property(readonly) NSDictionary *traits; // @synthesize traits=_traits;
@property(readonly) unsigned long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSSet *devices; // @synthesize devices=_devices;
@property(readonly) IDEIPAProcessorDevice *idiomaticDevice; // @synthesize idiomaticDevice=_idiomaticDevice;
- (void).cxx_destruct;
- (id)description;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdiomaticDevice:(id)arg1 devices:(id)arg2 displayName:(id)arg3 sortOrder:(unsigned long long)arg4 traits:(struct NSDictionary *)arg5;

@end

