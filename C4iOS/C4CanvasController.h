//
//  ViewController.h
//  C4iOSDevelopment
//
//  Created by Travis Kirton on 11-10-06.
//  Copyright (c) 2011 mediart. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface C4CanvasController : UIViewController {
}
-(void)setup;
@property (readonly, strong, nonatomic) C4View *canvas;
@end