//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTSimulatorGenerator;

@interface DVTSimulatorContext : NSObject
{
    DVTSimulatorGenerator *_simGenerator;
    DVTSimulatorGenerator *_pairedSimGenerator;
}

@property(retain, nonatomic) DVTSimulatorGenerator *pairedSimGenerator; // @synthesize pairedSimGenerator=_pairedSimGenerator;
@property(retain, nonatomic) DVTSimulatorGenerator *simGenerator; // @synthesize simGenerator=_simGenerator;
- (void).cxx_destruct;

@end

