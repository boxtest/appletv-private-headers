/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "STSStgObject.h"


__attribute__((visibility("hidden")))
@interface STStorage : STSStgObject {
@private
	Storage *m_pCStorage;	// 4 = 0x4
}
- (id)init;	// 0x329f7ce9
- (id)initWithCStorage:(Storage *)cstorage;	// 0x329f7cfd
- (void)close;	// 0x329f8239
- (void)dealloc;	// 0x329f8259
- (int)getChildType:(id)type;	// 0x329f7d95
- (id)getChildrenInfo;	// 0x329f7ddd
- (id)getInfo;	// 0x329f7f31
- (id)openStorage:(id)storage withMode:(int)mode;	// 0x329f8011
- (id)openStream:(id)stream withMode:(int)mode;	// 0x329f8125
- (void)setClass:(SSRW_GUID)aClass;	// 0x329f7d41
@end
