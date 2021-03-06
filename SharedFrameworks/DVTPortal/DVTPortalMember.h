//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTPortalPermissions, NSArray, NSNumber, NSString;

@interface DVTPortalMember : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    NSNumber *_personID;
    DVTPortalPermissions *_permissions;
    NSString *_emailAddress;
    NSArray *_roles;
}

@property(copy, nonatomic) NSArray *roles; // @synthesize roles=_roles;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) DVTPortalPermissions *permissions; // @synthesize permissions=_permissions;
@property(copy, nonatomic) NSNumber *personID; // @synthesize personID=_personID;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (id)memberIDWithSession:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *roleDescription;
- (id)description;

@end

