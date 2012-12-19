/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, ATVFeedDocument, NSString, ATVFeedMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedElement : XXUnknownSuperclass {
	NSString *_identifier;	// 4 = 0x4
	ATVFeedMerchant *_merchant;	// 8 = 0x8
	NSString *_type;	// 12 = 0xc
	ATVFeedElement *_parent;	// 16 = 0x10
	NSDictionary *_eventHandlerScripts;	// 20 = 0x14
}
@property(retain, nonatomic) NSDictionary *eventHandlerScripts;	// G=0x1652d1; S=0x1652e1; @synthesize=_eventHandlerScripts
@property(copy, nonatomic) NSString *identifier;	// G=0x165259; S=0x16526d; @synthesize=_identifier
@property(retain, nonatomic) ATVFeedMerchant *merchant;	// G=0x16516d; S=0x16527d; @synthesize=_merchant
@property(readonly, assign, nonatomic) ATVFeedDocument *ownerDocument;	// G=0x1651ad; 
@property(assign, nonatomic) ATVFeedElement *parent;	// G=0x1652b1; S=0x1652c1; @synthesize=_parent
@property(copy, nonatomic) NSString *type;	// G=0x16528d; S=0x1652a1; @synthesize=_type
+ (id)elementWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x164f51
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x164fa9
- (void)dealloc;	// 0x1651cd
// declared property getter: - (id)eventHandlerScripts;	// 0x1652d1
// declared property getter: - (id)identifier;	// 0x165259
// declared property getter: - (id)merchant;	// 0x16516d
// declared property getter: - (id)ownerDocument;	// 0x1651ad
// declared property getter: - (id)parent;	// 0x1652b1
// declared property setter: - (void)setEventHandlerScripts:(id)scripts;	// 0x1652e1
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x16526d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x16527d
// declared property setter: - (void)setParent:(id)parent;	// 0x1652c1
// declared property setter: - (void)setType:(id)type;	// 0x1652a1
// declared property getter: - (id)type;	// 0x16528d
@end
