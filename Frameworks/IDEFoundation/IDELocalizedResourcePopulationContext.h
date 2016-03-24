//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizationWorkContext.h>

#import "IDELocalizationWorkProvider.h"

@class IDEContainer<IDELocalizedContainer>, NSDictionary, NSMutableDictionary;

@interface IDELocalizedResourcePopulationContext : IDELocalizationWorkContext <IDELocalizationWorkProvider>
{
    NSMutableDictionary *_adaptorsByGroupIdentifier;
    IDEContainer<IDELocalizedContainer> *_container;
}

+ (id)contextWithParent:(id)arg1 container:(id)arg2;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
@property(readonly) NSDictionary *adaptorsByGroupIdentifier; // @synthesize adaptorsByGroupIdentifier=_adaptorsByGroupIdentifier;
- (void).cxx_destruct;
- (id)work;
- (void)primitiveInvalidate;
- (void)setAdaptor:(id)arg1 forGroupIdentifier:(id)arg2;
- (id)init;

@end

