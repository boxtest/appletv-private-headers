/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueSetter.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueMethodSetter : NSKeyValueSetter {
@private
	objc_method *_method;	// 36 = 0x24
}
@property(readonly, assign) objc_method *method;	// G=0x30287615; converted property
- (id)initWithContainerClassID:(id)containerClassID key:(id)key method:(objc_method *)method;	// 0x30277009
// converted property getter: - (objc_method *)method;	// 0x30287615
@end

