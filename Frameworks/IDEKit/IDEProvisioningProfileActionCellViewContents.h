//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IDEProvisioningProfileActionCellViewContents : NSObject
{
    BOOL _busy;
    id <IDEEnhancedProvisioningProfile> _profile;
}

@property(readonly, nonatomic, getter=isBusy) BOOL busy; // @synthesize busy=_busy;
@property(readonly, nonatomic) id <IDEEnhancedProvisioningProfile> profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)name;
- (id)initWithProfile:(id)arg1 busy:(BOOL)arg2;

@end

