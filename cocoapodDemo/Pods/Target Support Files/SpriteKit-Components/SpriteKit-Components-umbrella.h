#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "SKCNodeIsComponent.h"
#import "SKComponent.h"
#import "SKComponentManager.h"
#import "SKComponentNode.h"
#import "SKComponents.h"
#import "SKComponentScene.h"
#import "SKHelper.h"

FOUNDATION_EXPORT double SpriteKit_ComponentsVersionNumber;
FOUNDATION_EXPORT const unsigned char SpriteKit_ComponentsVersionString[];

