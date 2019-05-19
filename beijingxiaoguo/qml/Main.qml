import VPlay 2.0
import QtQuick 2.0
import QtQuick.Particles 2.0

GameWindow {
    width: 400
    height: 600
    Rectangle {
        width: 400
        height: 600
        Image {
            source: "../assets/background.jpg"
            anchors.fill: parent
        }

        ParticleSystem {
            anchors.fill: parent
            Emitter {
                width: parent.width
                emitRate: 3
                lifeSpan: 7000
                size: 40
                velocity: PointDirection {
                    y: 160
                    yVariation: 60
                    xVariation: 40
                }
            }
            ImageParticle {
                anchors.fill: parent
                id: particles
                sprites: [
                    Sprite {
                        source: "../assets/Dongman.png"
                        frameCount: 1
                        frameDuration: 1
                        to: {
                            a: 1
                            b: 1
                            c: 1
                            d: 1
                        }
                    },
                    Sprite {
                        name: "a"
                        source: "../assets/Dongman.png"
                        frameCount: 1
                        frameDuration: 10000
                    },
                    Sprite {
                        name: "b"
                        source: "../assets/Dongman.png"
                        frameCount: 1
                        frameDuration: 10000
                    },
                    Sprite {
                        name: "c"
                        source: "../assets/Dongman.png"
                        frameCount: 1
                        frameDuration: 10000
                    },
                    Sprite {
                        name: "d"
                        source: "../assets/Dongman.png"
                        frameCount: 1
                        frameDuration: 10000
                    }
                ]
                width: 100
                height: 100
                x: 20
                y: 20
                z: 4
            }
            Friction {
                anchors.fill: parent
                anchors.margins: -200
                factor: 0.3
            }
        }
    }
}
