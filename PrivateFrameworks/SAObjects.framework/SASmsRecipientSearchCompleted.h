/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SAPersonAttribute;

@interface SASmsRecipientSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(retain) SAPersonAttribute * recipient;
@property(copy) NSArray * recipients;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)recipientSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)recipientSearchCompleted;

- (id)encodedClassName;
- (id)recipients;
- (id)recipient;
- (void)setRecipient:(id)arg1;
- (id)groupIdentifier;
- (void)setRecipients:(id)arg1;

@end