/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaPredicate;

@interface MPMediaConditionalPredicate : MPMediaPredicate {
    MPMediaPredicate *_conditionPredicate;
    MPMediaPredicate *_elsePredicate;
    MPMediaPredicate *_thenPredicate;
}

@property(readonly) MPMediaPredicate * conditionPredicate;
@property(readonly) MPMediaPredicate * elsePredicate;
@property(readonly) MPMediaPredicate * thenPredicate;

+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;

- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;
- (id)conditionPredicate;
- (id)elsePredicate;
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
- (id)thenPredicate;

@end
