/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardLayoutStar, UIKBTree, NSTimer, NSMutableDictionary;

@interface UIKBKeyplaneView : UIView  {
    UIKBTree *_keyboard;
    UIKBTree *_keyplane;
    UIKeyboardLayoutStar *_layout;
    NSMutableDictionary *_states;
    NSMutableDictionary *_subviewIndex;
    NSMutableDictionary *_activeViewIndex;
    NSMutableDictionary *_renderedKeyViews;
    NSMutableDictionary *_delayedDeactivationKeys;
    NSTimer *_activatedTimer;
    BOOL _performingDeactivation;
}

@property(retain) UIKBTree * keyplane;
@property UIKeyboardLayoutStar * layout;


- (void)activateKeys;
- (id)viewForKey:(id)arg1 state:(int)arg2;
- (id)cacheIdentifierForKey:(id)arg1;
- (Class)classForKey:(id)arg1;
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;
- (id)containingViewForKey:(id)arg1 withState:(int)arg2;
- (void)deactivateKey:(id)arg1;
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;
- (BOOL)keyIsMaskable:(id)arg1;
- (void)scheduleDelayedDeactivation;
- (void)performDelayedDeactivation:(id)arg1;
- (void)cancelDelayedDeactivation;
- (void)addKeyToDelayedDeactivationSet:(id)arg1;
- (id)viewForKey:(id)arg1;
- (void)deactivateKeys;
- (void)setLayout:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboard:(id)arg2 keyplane:(id)arg3;
- (BOOL)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;
- (void)purgeKeyViews;
- (int)stateForKey:(id)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (void)purgeSubviews;
- (id)cacheKey;
- (id)keyplane;
- (void)setKeyplane:(id)arg1;
- (void)displayLayer:(id)arg1;
- (id)layout;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end