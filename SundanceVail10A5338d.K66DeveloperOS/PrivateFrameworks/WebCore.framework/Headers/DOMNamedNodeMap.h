/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"


@interface DOMNamedNodeMap : DOMObject {
}
@property(readonly, assign) unsigned length;	// G=0x3584ba25; 
- (void)dealloc;	// 0x3584b971
- (void)finalize;	// 0x3584b9dd
- (id)getNamedItem:(id)item;	// 0x3584bb25
- (id)getNamedItemNS:(id)ns :(id)arg2;	// 0x3584c4d1
- (id)getNamedItemNS:(id)ns localName:(id)name;	// 0x3584c231
- (id)item:(unsigned)item;	// 0x3584c0c9
// declared property getter: - (unsigned)length;	// 0x3584ba25
- (id)removeNamedItem:(id)item;	// 0x3584beb1
- (id)removeNamedItemNS:(id)ns :(id)arg2;	// 0x3584cba9
- (id)removeNamedItemNS:(id)ns localName:(id)name;	// 0x3584c8f5
- (id)setNamedItem:(id)item;	// 0x3584bd2d
- (id)setNamedItemNS:(id)ns;	// 0x3584c771
@end
