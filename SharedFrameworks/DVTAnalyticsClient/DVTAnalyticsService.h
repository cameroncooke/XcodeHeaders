//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTServicesType, NSArray, NSDictionary;

@interface DVTAnalyticsService : NSObject
{
    NSArray *_orderedParameters;
    NSArray *_pathComponents;
    NSDictionary *_parameters;
    DVTServicesType *_responseType;
}

+ (id)_combinedParametersFromOptions:(id)arg1 andURLComponentProvider:(id)arg2;
+ (id)serviceWithIdentifier:(id)arg1 pathComponents:(id)arg2 parameters:(id)arg3;
+ (void)initialize;
@property(copy) DVTServicesType *responseType; // @synthesize responseType=_responseType;
@property(copy) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy) NSArray *pathComponents; // @synthesize pathComponents=_pathComponents;
@property(readonly) NSArray *orderedParameters; // @synthesize orderedParameters=_orderedParameters;
- (void).cxx_destruct;
- (id)_requestQueryString;
- (id)_requestEndpoint;
- (id)_responseFromServiceWithSession:(id)arg1 error:(id *)arg2;
- (id)resultWithSession:(id)arg1 error:(id *)arg2;
- (id)initWithExtension:(id)arg1 pathComponents:(id)arg2 parameters:(id)arg3;

@end

