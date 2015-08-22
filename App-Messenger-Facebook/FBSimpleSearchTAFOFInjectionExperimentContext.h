//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBSimpleSearchTAFOFInjectionExperimentContext : FBExperimentContext
{
    BOOL _inExperiment;
    BOOL _injectFOF;
    BOOL _fofInjectionInGetMoreResultsSection;
    unsigned int _fofInjectionMinQueryLenghth;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL fofInjectionInGetMoreResultsSection; // @synthesize fofInjectionInGetMoreResultsSection=_fofInjectionInGetMoreResultsSection;
@property(readonly, nonatomic) unsigned int fofInjectionMinQueryLenghth; // @synthesize fofInjectionMinQueryLenghth=_fofInjectionMinQueryLenghth;
@property(readonly, nonatomic) BOOL injectFOF; // @synthesize injectFOF=_injectFOF;
@property(readonly, nonatomic) BOOL inExperiment; // @synthesize inExperiment=_inExperiment;

@end
